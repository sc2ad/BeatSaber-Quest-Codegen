// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ICubeNoteControllerInitializable`1<T>
  template<typename T>
  class ICubeNoteControllerInitializable_1;
  // Forward declaring type: ICubeNoteTypeProvider
  class ICubeNoteTypeProvider;
  // Forward declaring type: INoteMovementProvider
  class INoteMovementProvider;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DisappearingArrowControllerBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class DisappearingArrowControllerBase_1 : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private MaterialPropertyBlockController[] _transparentObjectMaterialPropertyBlocks
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<GlobalNamespace::MaterialPropertyBlockController*> transparentObjectMaterialPropertyBlocks;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MaterialPropertyBlockController*>) == 0x8);
    // private UnityEngine.MeshRenderer _cubeMeshRenderer
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::MeshRenderer* cubeMeshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private CutoutEffect _arrowCutoutEffect
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::CutoutEffect* arrowCutoutEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutEffect*) == 0x8);
    // [SpaceAttribute] Offset: 0xF048F8
    // private System.Single _disappearingNormalStart
    // Size: 0x4
    // Offset: 0x0
    float disappearingNormalStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearingNormalEnd
    // Size: 0x4
    // Offset: 0x0
    float disappearingNormalEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearingGhostStart
    // Size: 0x4
    // Offset: 0x0
    float disappearingGhostStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearingGhostEnd
    // Size: 0x4
    // Offset: 0x0
    float disappearingGhostEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevArrowTransparency
    // Size: 0x4
    // Offset: 0x0
    float prevArrowTransparency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minDistance
    // Size: 0x4
    // Offset: 0x0
    float minDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxDistance
    // Size: 0x4
    // Offset: 0x0
    float maxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hideMesh
    // Size: 0x1
    // Offset: 0x0
    bool hideMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _fadeArrow
    // Size: 0x1
    // Offset: 0x0
    bool fadeArrow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xF04960
    // Autogenerated static field getter
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::_get__colorId");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DisappearingArrowControllerBase_1<T>*>::get(), "_colorId"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::_set__colorId");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DisappearingArrowControllerBase_1<T>*>::get(), "_colorId", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private MaterialPropertyBlockController[] _transparentObjectMaterialPropertyBlocks
    ::ArrayW<GlobalNamespace::MaterialPropertyBlockController*>& dyn__transparentObjectMaterialPropertyBlocks() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__transparentObjectMaterialPropertyBlocks");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_transparentObjectMaterialPropertyBlocks"))->offset;
      return *reinterpret_cast<::ArrayW<GlobalNamespace::MaterialPropertyBlockController*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.MeshRenderer _cubeMeshRenderer
    UnityEngine::MeshRenderer*& dyn__cubeMeshRenderer() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__cubeMeshRenderer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_cubeMeshRenderer"))->offset;
      return *reinterpret_cast<UnityEngine::MeshRenderer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private CutoutEffect _arrowCutoutEffect
    GlobalNamespace::CutoutEffect*& dyn__arrowCutoutEffect() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__arrowCutoutEffect");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_arrowCutoutEffect"))->offset;
      return *reinterpret_cast<GlobalNamespace::CutoutEffect**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _disappearingNormalStart
    float& dyn__disappearingNormalStart() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__disappearingNormalStart");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_disappearingNormalStart"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _disappearingNormalEnd
    float& dyn__disappearingNormalEnd() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__disappearingNormalEnd");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_disappearingNormalEnd"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _disappearingGhostStart
    float& dyn__disappearingGhostStart() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__disappearingGhostStart");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_disappearingGhostStart"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _disappearingGhostEnd
    float& dyn__disappearingGhostEnd() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__disappearingGhostEnd");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_disappearingGhostEnd"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _prevArrowTransparency
    float& dyn__prevArrowTransparency() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__prevArrowTransparency");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_prevArrowTransparency"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _minDistance
    float& dyn__minDistance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__minDistance");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_minDistance"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single _maxDistance
    float& dyn__maxDistance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__maxDistance");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_maxDistance"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _hideMesh
    bool& dyn__hideMesh() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__hideMesh");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_hideMesh"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _fadeArrow
    bool& dyn__fadeArrow() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::dyn__fadeArrow");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_fadeArrow"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected T get_gameNoteController()
    // Offset: 0xFFFFFFFF
    T get_gameNoteController() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::get_gameNoteController");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_gameNoteController", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // protected System.Void Awake()
    // Offset: 0xFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::Awake");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::OnDestroy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void CalculateMinMaxDistance()
    // Offset: 0xFFFFFFFF
    void CalculateMinMaxDistance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::CalculateMinMaxDistance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CalculateMinMaxDistance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void HandleNoteMovementNoteDidMoveInJumpPhase()
    // Offset: 0xFFFFFFFF
    void HandleNoteMovementNoteDidMoveInJumpPhase() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::HandleNoteMovementNoteDidMoveInJumpPhase");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleNoteMovementNoteDidMoveInJumpPhase", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void HandleCubeNoteControllerDidInit(T gameNoteController)
    // Offset: 0xFFFFFFFF
    void HandleCubeNoteControllerDidInit(T gameNoteController) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::HandleCubeNoteControllerDidInit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleCubeNoteControllerDidInit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameNoteController)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, gameNoteController);
    }
    // private System.Void SetArrowTransparency(System.Single arrowTransparency)
    // Offset: 0xFFFFFFFF
    void SetArrowTransparency(float arrowTransparency) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::SetArrowTransparency");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetArrowTransparency", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arrowTransparency)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, arrowTransparency);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisappearingArrowControllerBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisappearingArrowControllerBase_1<T>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisappearingArrowControllerBase_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DisappearingArrowControllerBase_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // DisappearingArrowControllerBase`1
  // Could not write size check! Type: DisappearingArrowControllerBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DisappearingArrowControllerBase_1, "", "DisappearingArrowControllerBase`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
