// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
  // Forward declaring type: IBloomPrePassParams
  class IBloomPrePassParams;
  // Forward declaring type: ToneMapping
  struct ToneMapping;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRendererSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BloomPrePassRendererSO::PreallocationData
    class PreallocationData;
    // Nested type: GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData
    class LightsRenderingData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xEDE34C
    // private BloomPrePassRendererSO/PreallocationData[] _preallocationData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*> preallocationData;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*>) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,BloomPrePassRendererSO/LightsRenderingData> _lightsRenderingData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>* lightsRenderingData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>*) == 0x8);
    // private UnityEngine.Rendering.CommandBuffer _commandBuffer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x38
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: blackTexture
    char __padding4[0x7] = {};
    // private UnityEngine.Texture2D _blackTexture
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Texture2D* blackTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEDE384
    // Get static field: static private readonly System.Int32 _vertexTransformMatrixID
    static int _get__vertexTransformMatrixID();
    // Set static field: static private readonly System.Int32 _vertexTransformMatrixID
    static void _set__vertexTransformMatrixID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEDE394
    // Get static field: static private readonly System.Int32 _bloomPrePassTextureID
    static int _get__bloomPrePassTextureID();
    // Set static field: static private readonly System.Int32 _bloomPrePassTextureID
    static void _set__bloomPrePassTextureID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEDE3A4
    // Get static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
    static int _get__stereoCameraEyeOffsetID();
    // Set static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
    static void _set__stereoCameraEyeOffsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xEDE3B4
    // Get static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
    static int _get__customFogTextureToScreenRatioID();
    // Set static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
    static void _set__customFogTextureToScreenRatioID(int value);
    // Get instance field reference: private BloomFogSO _bloomFog
    GlobalNamespace::BloomFogSO*& dyn__bloomFog();
    // Get instance field reference: private BloomPrePassRendererSO/PreallocationData[] _preallocationData
    ::ArrayW<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*>& dyn__preallocationData();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,BloomPrePassRendererSO/LightsRenderingData> _lightsRenderingData
    System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>*& dyn__lightsRenderingData();
    // Get instance field reference: private UnityEngine.Rendering.CommandBuffer _commandBuffer
    UnityEngine::Rendering::CommandBuffer*& dyn__commandBuffer();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // Get instance field reference: private UnityEngine.Texture2D _blackTexture
    UnityEngine::Texture2D*& dyn__blackTexture();
    // protected System.Void OnDisable()
    // Offset: 0x1E24854
    void OnDisable();
    // public System.Void Init()
    // Offset: 0x1E21388
    void Init();
    // private System.Void Cleanup()
    // Offset: 0x1E24858
    void Cleanup();
    // public System.Void RenderAndSetData(UnityEngine.Vector3 cameraPos, UnityEngine.Matrix4x4 projectionMatrix, UnityEngine.Matrix4x4 viewMatrix, System.Single stereoCameraEyeOffset, IBloomPrePassParams bloomPrePassParams, UnityEngine.RenderTexture dest, out UnityEngine.Vector2 textureToScreenRatio, out ToneMapping toneMapping)
    // Offset: 0x1E21C6C
    void RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest, ByRef<UnityEngine::Vector2> textureToScreenRatio, ByRef<GlobalNamespace::ToneMapping> toneMapping);
    // static public System.Void SetDataToShaders(System.Single stereoCameraEyeOffset, UnityEngine.Vector2 textureToScreenRatio, UnityEngine.Texture bloomFogTexture, ToneMapping toneMapping)
    // Offset: 0x1E225B0
    static void SetDataToShaders(float stereoCameraEyeOffset, UnityEngine::Vector2 textureToScreenRatio, UnityEngine::Texture* bloomFogTexture, GlobalNamespace::ToneMapping toneMapping);
    // public System.Void SetCustomStereoCameraEyeOffset(System.Single stereoCameraEyeOffset)
    // Offset: 0x1E25654
    void SetCustomStereoCameraEyeOffset(float stereoCameraEyeOffset);
    // public UnityEngine.RenderTexture CreateBloomPrePassRenderTextureIfNeeded(UnityEngine.RenderTexture renderTexture, IBloomPrePassParams bloomPrePassParams)
    // Offset: 0x1E21958
    UnityEngine::RenderTexture* CreateBloomPrePassRenderTextureIfNeeded(UnityEngine::RenderTexture* renderTexture, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams);
    // public System.Void EnableBloomFog()
    // Offset: 0x1E22594
    void EnableBloomFog();
    // public System.Void DisableBloomFog()
    // Offset: 0x1E22778
    void DisableBloomFog();
    // public System.Void UpdateBloomFogParams()
    // Offset: 0x1E256D0
    void UpdateBloomFogParams();
    // public System.Void GetCameraParams(UnityEngine.Camera camera, out UnityEngine.Matrix4x4 projectionMatrix, out UnityEngine.Matrix4x4 viewMatrix, out System.Single stereoCameraEyeOffset)
    // Offset: 0x1E217EC
    void GetCameraParams(UnityEngine::Camera* camera, ByRef<UnityEngine::Matrix4x4> projectionMatrix, ByRef<UnityEngine::Matrix4x4> viewMatrix, ByRef<float> stereoCameraEyeOffset);
    // private System.Void RenderAllLights(UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single linesWidth)
    // Offset: 0x1E24D8C
    void RenderAllLights(UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float linesWidth);
    // private System.Void PrepareLightsMeshRendering(BloomPrePassRendererSO/LightsRenderingData data, System.Int32 numberOfLights)
    // Offset: 0x1E24988
    void PrepareLightsMeshRendering(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData* data, int numberOfLights);
    // private UnityEngine.Matrix4x4 MatrixLerp(UnityEngine.Matrix4x4 from, UnityEngine.Matrix4x4 to, System.Single t)
    // Offset: 0x1E256E8
    UnityEngine::Matrix4x4 MatrixLerp(UnityEngine::Matrix4x4 from, UnityEngine::Matrix4x4 to, float t);
    // public System.Void .ctor()
    // Offset: 0x1E257F4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRendererSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E25864
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnEnable()
    // Offset: 0x1E2482C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // BloomPrePassRendererSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRendererSO), 64 + sizeof(UnityEngine::Texture2D*)> __GlobalNamespace_BloomPrePassRendererSOSizeCheck;
  static_assert(sizeof(BloomPrePassRendererSO) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO*, "", "BloomPrePassRendererSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData
// Il2CppName: RenderAndSetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)(UnityEngine::Vector3, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4, float, GlobalNamespace::IBloomPrePassParams*, UnityEngine::RenderTexture*, ByRef<UnityEngine::Vector2>, ByRef<GlobalNamespace::ToneMapping>)>(&GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData)> {
  static const MethodInfo* get() {
    static auto* cameraPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* stereoCameraEyeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bloomPrePassParams = &::il2cpp_utils::GetClassFromName("", "IBloomPrePassParams")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* textureToScreenRatio = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* toneMapping = &::il2cpp_utils::GetClassFromName("", "ToneMapping")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "RenderAndSetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio, toneMapping});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders
// Il2CppName: SetDataToShaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, UnityEngine::Vector2, UnityEngine::Texture*, GlobalNamespace::ToneMapping)>(&GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders)> {
  static const MethodInfo* get() {
    static auto* stereoCameraEyeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* textureToScreenRatio = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* bloomFogTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* toneMapping = &::il2cpp_utils::GetClassFromName("", "ToneMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "SetDataToShaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stereoCameraEyeOffset, textureToScreenRatio, bloomFogTexture, toneMapping});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset
// Il2CppName: SetCustomStereoCameraEyeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)(float)>(&GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset)> {
  static const MethodInfo* get() {
    static auto* stereoCameraEyeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "SetCustomStereoCameraEyeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stereoCameraEyeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded
// Il2CppName: CreateBloomPrePassRenderTextureIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (GlobalNamespace::BloomPrePassRendererSO::*)(UnityEngine::RenderTexture*, GlobalNamespace::IBloomPrePassParams*)>(&GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded)> {
  static const MethodInfo* get() {
    static auto* renderTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* bloomPrePassParams = &::il2cpp_utils::GetClassFromName("", "IBloomPrePassParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "CreateBloomPrePassRenderTextureIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderTexture, bloomPrePassParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog
// Il2CppName: EnableBloomFog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "EnableBloomFog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog
// Il2CppName: DisableBloomFog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "DisableBloomFog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams
// Il2CppName: UpdateBloomFogParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "UpdateBloomFogParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::GetCameraParams
// Il2CppName: GetCameraParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)(UnityEngine::Camera*, ByRef<UnityEngine::Matrix4x4>, ByRef<UnityEngine::Matrix4x4>, ByRef<float>)>(&GlobalNamespace::BloomPrePassRendererSO::GetCameraParams)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* stereoCameraEyeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "GetCameraParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::RenderAllLights
// Il2CppName: RenderAllLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)(UnityEngine::Matrix4x4, UnityEngine::Matrix4x4, float)>(&GlobalNamespace::BloomPrePassRendererSO::RenderAllLights)> {
  static const MethodInfo* get() {
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* linesWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "RenderAllLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewMatrix, projectionMatrix, linesWidth});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering
// Il2CppName: PrepareLightsMeshRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*, int)>(&GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "BloomPrePassRendererSO/LightsRenderingData")->byval_arg;
    static auto* numberOfLights = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "PrepareLightsMeshRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, numberOfLights});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::MatrixLerp
// Il2CppName: MatrixLerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (GlobalNamespace::BloomPrePassRendererSO::*)(UnityEngine::Matrix4x4, UnityEngine::Matrix4x4, float)>(&GlobalNamespace::BloomPrePassRendererSO::MatrixLerp)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "MatrixLerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassRendererSO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassRendererSO::*)()>(&GlobalNamespace::BloomPrePassRendererSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassRendererSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
