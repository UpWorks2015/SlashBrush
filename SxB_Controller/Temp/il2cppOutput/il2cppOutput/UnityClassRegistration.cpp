struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 67 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//25. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//26. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//27. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//28. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//29. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//30. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//31. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//32. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//33. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//34. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//35. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//38. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//39. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//42. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//43. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//44. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//45. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//48. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//49. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//57. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//58. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//59. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//60. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//61. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//62. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//63. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//64. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//65. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//66. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
