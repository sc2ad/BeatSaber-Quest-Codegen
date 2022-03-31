// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseStateTransition`1
#include "GlobalNamespace/BaseStateTransition_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnabledTransitionSO
  class EnabledTransitionSO;
  // Forward declaring type: BaseTransitionSO
  class BaseTransitionSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnabledViewStateTransition
  class EnabledViewStateTransition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnabledViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnabledViewStateTransition*, "", "EnabledViewStateTransition");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: EnabledViewStateTransition
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 1246910
  class EnabledViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::Behaviour*> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [SpaceAttribute] Offset: 0x12586CC
    // private EnabledTransitionSO _transition
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::EnabledTransitionSO* transition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnabledTransitionSO*) == 0x8);
    public:
    // Get instance field reference: private EnabledTransitionSO _transition
    ::GlobalNamespace::EnabledTransitionSO*& dyn__transition();
    // protected override BaseTransitionSO get_transition()
    // Offset: 0x13824A4
    // Implemented from: BaseStateTransition
    // Base method: BaseTransitionSO BaseStateTransition::get_transition()
    ::GlobalNamespace::BaseTransitionSO* get_transition();
    // public System.Void .ctor()
    // Offset: 0x138260C
    // Implemented from: BaseStateTransition`1
    // Base method: System.Void BaseStateTransition_1::.ctor()
    // Base method: System.Void BaseStateTransition::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnabledViewStateTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnabledViewStateTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnabledViewStateTransition*, creationType>()));
    }
    // protected override System.Void TransitionToNormalState()
    // Offset: 0x13824AC
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToNormalState()
    void TransitionToNormalState();
    // protected override System.Void TransitionToHighlightedState()
    // Offset: 0x13824B8
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToHighlightedState()
    void TransitionToHighlightedState();
    // protected override System.Void TransitionToPressedState()
    // Offset: 0x13824C4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToPressedState()
    void TransitionToPressedState();
    // protected override System.Void TransitionToDisabledState()
    // Offset: 0x13824D4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToDisabledState()
    void TransitionToDisabledState();
    // protected override System.Void TransitionToSelectedState()
    // Offset: 0x13824E4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedState()
    void TransitionToSelectedState();
    // protected override System.Void TransitionToSelectedAndHighlightedState()
    // Offset: 0x13824F4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::TransitionToSelectedAndHighlightedState()
    void TransitionToSelectedAndHighlightedState();
    // protected override System.Void SetNormalState()
    // Offset: 0x1382504
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetNormalState()
    void SetNormalState();
    // protected override System.Void SetHighlightedState()
    // Offset: 0x1382530
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetHighlightedState()
    void SetHighlightedState();
    // protected override System.Void SetPressedState()
    // Offset: 0x138255C
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetPressedState()
    void SetPressedState();
    // protected override System.Void SetDisabledState()
    // Offset: 0x1382588
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetDisabledState()
    void SetDisabledState();
    // protected override System.Void SetSelectedState()
    // Offset: 0x13825B4
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedState()
    void SetSelectedState();
    // protected override System.Void SetSelectedAndHighlightedState()
    // Offset: 0x13825E0
    // Implemented from: BaseStateTransition
    // Base method: System.Void BaseStateTransition::SetSelectedAndHighlightedState()
    void SetSelectedAndHighlightedState();
  }; // EnabledViewStateTransition
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::get_transition
// Il2CppName: get_transition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BaseTransitionSO* (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::get_transition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "get_transition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::TransitionToNormalState
// Il2CppName: TransitionToNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::TransitionToNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "TransitionToNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::TransitionToHighlightedState
// Il2CppName: TransitionToHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::TransitionToHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "TransitionToHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::TransitionToPressedState
// Il2CppName: TransitionToPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::TransitionToPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "TransitionToPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::TransitionToDisabledState
// Il2CppName: TransitionToDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::TransitionToDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "TransitionToDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::TransitionToSelectedState
// Il2CppName: TransitionToSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::TransitionToSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "TransitionToSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::TransitionToSelectedAndHighlightedState
// Il2CppName: TransitionToSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::TransitionToSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "TransitionToSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::SetNormalState
// Il2CppName: SetNormalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::SetNormalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "SetNormalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::SetHighlightedState
// Il2CppName: SetHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::SetHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "SetHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::SetPressedState
// Il2CppName: SetPressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::SetPressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "SetPressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::SetDisabledState
// Il2CppName: SetDisabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::SetDisabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "SetDisabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::SetSelectedState
// Il2CppName: SetSelectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::SetSelectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "SetSelectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnabledViewStateTransition::SetSelectedAndHighlightedState
// Il2CppName: SetSelectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnabledViewStateTransition::*)()>(&GlobalNamespace::EnabledViewStateTransition::SetSelectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnabledViewStateTransition*), "SetSelectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
