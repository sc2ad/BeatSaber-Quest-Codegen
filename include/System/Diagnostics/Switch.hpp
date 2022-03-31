// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Switch
  class Switch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Switch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Switch*, "System.Diagnostics", "Switch");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Switch
  // [TokenAttribute] Offset: FFFFFFFF
  class Switch : public ::Il2CppObject {
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
    // private readonly System.String description
    // Size: 0x8
    // Offset: 0x10
    ::StringW description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String displayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String switchValueString
    // Size: 0x8
    // Offset: 0x20
    ::StringW switchValueString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String defaultValue
    // Size: 0x8
    // Offset: 0x28
    ::StringW defaultValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.List`1<System.WeakReference> switches
    static ::System::Collections::Generic::List_1<::System::WeakReference*>* _get_switches();
    // Set static field: static private System.Collections.Generic.List`1<System.WeakReference> switches
    static void _set_switches(::System::Collections::Generic::List_1<::System::WeakReference*>* value);
    // Get static field: static private System.Int32 s_LastCollectionCount
    static int _get_s_LastCollectionCount();
    // Set static field: static private System.Int32 s_LastCollectionCount
    static void _set_s_LastCollectionCount(int value);
    // Get instance field reference: private readonly System.String description
    ::StringW& dyn_description();
    // Get instance field reference: private readonly System.String displayName
    ::StringW& dyn_displayName();
    // Get instance field reference: private System.String switchValueString
    ::StringW& dyn_switchValueString();
    // Get instance field reference: private System.String defaultValue
    ::StringW& dyn_defaultValue();
    // protected System.Void .ctor(System.String displayName, System.String description)
    // Offset: 0x1CA7284
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Switch* New_ctor(::StringW displayName, ::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Switch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Switch*, creationType>(displayName, description)));
    }
    // protected System.Void .ctor(System.String displayName, System.String description, System.String defaultSwitchValue)
    // Offset: 0x1CAC6AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Switch* New_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Switch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Switch*, creationType>(displayName, description, defaultSwitchValue)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CACCA4
    static void _cctor();
    // static private System.Void _pruneCachedSwitches()
    // Offset: 0x1CAC844
    static void _pruneCachedSwitches();
  }; // System.Diagnostics.Switch
  #pragma pack(pop)
  static check_size<sizeof(Switch), 40 + sizeof(::StringW)> __System_Diagnostics_SwitchSizeCheck;
  static_assert(sizeof(Switch) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Switch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Switch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Switch::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Switch::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Switch*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Switch::_pruneCachedSwitches
// Il2CppName: _pruneCachedSwitches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Switch::_pruneCachedSwitches)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Switch*), "_pruneCachedSwitches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
