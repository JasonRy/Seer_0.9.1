struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_VR();
	RegisterModule_VR();

}

void RegisterAllClasses()
{
	//Total: 97 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//10. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//13. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//14. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//27. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//28. ComputeShader
	void RegisterClass_ComputeShader();
	RegisterClass_ComputeShader();

	//29. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//30. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//31. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//32. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//33. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//34. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//35. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//36. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//37. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//38. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//39. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//40. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//41. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//42. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//43. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//44. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//45. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//46. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//47. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//48. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//49. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//50. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//51. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//52. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//53. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//54. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//55. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//56. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//57. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//58. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//59. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//60. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//61. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//62. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//63. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//64. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//65. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//66. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//67. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//68. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//69. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//70. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//71. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//72. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//73. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//74. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//75. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//76. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//77. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//78. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//79. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//80. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//81. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//82. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//83. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//84. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//85. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//86. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//87. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//88. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//89. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//90. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//91. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//92. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//93. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//94. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//95. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//96. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}
