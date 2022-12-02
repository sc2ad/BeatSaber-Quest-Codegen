// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConditionalMove
  class ConditionalMove;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConditionalMove);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalMove*, "", "ConditionalMove");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: ConditionalMove
  // [TokenAttribute] Offset: FFFFFFFF
  class ConditionalMove : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: offset and: value
    char __padding0[0x4] = {};
    // private BoolSO _value
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BoolSO* value;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private System.Boolean _activateOnFalse
    // Size: 0x1
    // Offset: 0x30
    bool activateOnFalse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 _offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: private BoolSO _value
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__value();
    // Get instance field reference: private System.Boolean _activateOnFalse
    [[deprecated("Use field access instead!")]] bool& dyn__activateOnFalse();
    // public System.Void .ctor()
    // Offset: 0x1432310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalMove* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConditionalMove::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalMove*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x14321EC
    void Awake();
  }; // ConditionalMove
  #pragma pack(pop)
  static check_size<sizeof(ConditionalMove), 48 + sizeof(bool)> __GlobalNamespace_ConditionalMoveSizeCheck;
  static_assert(sizeof(ConditionalMove) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConditionalMove::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConditionalMove::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalMove::*)()>(&GlobalNamespace::ConditionalMove::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalMove*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
