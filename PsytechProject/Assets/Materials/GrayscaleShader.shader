Shader "Custom/DepthGrayscaleShader"
{
    Properties
    {
        _DepthScale ("Depth Scale", Range(0,10)) = 1
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex : POSITION;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float height : TEXCOORD0;
            };

            float _DepthScale;

            v2f vert (appdata_t v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.height = v.vertex.y / _DepthScale; // Normalize height
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float grayscale = saturate(i.height); // Clamp between 0-1
                return fixed4(grayscale, grayscale, grayscale, 1);
            }
            ENDCG
        }
    }
}

