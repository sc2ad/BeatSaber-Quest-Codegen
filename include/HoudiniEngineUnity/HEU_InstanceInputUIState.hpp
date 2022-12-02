// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InstanceInputUIState
  class HEU_InstanceInputUIState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstanceInputUIState);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstanceInputUIState*, "HoudiniEngineUnity", "HEU_InstanceInputUIState");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InstanceInputUIState
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InstanceInputUIState : public ::UnityEngine::ScriptableObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>*/ {
    public:
    public:
    // public System.Boolean _showInstanceInputs
    // Size: 0x1
    // Offset: 0x18
    bool showInstanceInputs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showInstanceInputs and: numInputsToShowUI
    char __padding0[0x3] = {};
    // public System.Int32 _numInputsToShowUI
    // Size: 0x4
    // Offset: 0x1C
    int numInputsToShowUI;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _inputsPageIndexUI
    // Size: 0x4
    // Offset: 0x20
    int inputsPageIndexUI;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_InstanceInputUIState
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>* i_HEU_InstanceInputUIState() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState*>*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean _showInstanceInputs
    [[deprecated("Use field access instead!")]] bool& dyn__showInstanceInputs();
    // Get instance field reference: public System.Int32 _numInputsToShowUI
    [[deprecated("Use field access instead!")]] int& dyn__numInputsToShowUI();
    // Get instance field reference: public System.Int32 _inputsPageIndexUI
    [[deprecated("Use field access instead!")]] int& dyn__inputsPageIndexUI();
    // public System.Void .ctor()
    // Offset: 0x18A8BD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InstanceInputUIState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InstanceInputUIState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InstanceInputUIState*, creationType>()));
    }
    // public System.Void CopyTo(HoudiniEngineUnity.HEU_InstanceInputUIState dest)
    // Offset: 0x18A8A14
    void CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* dest);
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_InstanceInputUIState other)
    // Offset: 0x18A8A40
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* other);
  }; // HoudiniEngineUnity.HEU_InstanceInputUIState
  #pragma pack(pop)
  static check_size<sizeof(HEU_InstanceInputUIState), 32 + sizeof(int)> __HoudiniEngineUnity_HEU_InstanceInputUIStateSizeCheck;
  static_assert(sizeof(HEU_InstanceInputUIState) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InstanceInputUIState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InstanceInputUIState::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InstanceInputUIState::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(&HoudiniEngineUnity::HEU_InstanceInputUIState::CopyTo)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InstanceInputUIState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InstanceInputUIState*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InstanceInputUIState::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InstanceInputUIState::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(&HoudiniEngineUnity::HEU_InstanceInputUIState::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InstanceInputUIState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InstanceInputUIState*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
