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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: GenericMethodHelper
  class GenericMethodHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::GenericMethodHelper);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::GenericMethodHelper*, "NUnit.Framework.Internal", "GenericMethodHelper");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.GenericMethodHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericMethodHelper : public ::Il2CppObject {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x1107CAC
    // private System.Reflection.MethodInfo <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MethodInfo* Method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x1107CE8
    // private System.Type[] <TypeParms>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Type*> TypeParms;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x1107D24
    // private System.Type[] <TypeArgs>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Type*> TypeArgs;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x1107D60
    // private System.Type[] <ParmTypes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Type*> ParmTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    public:
    // Get instance field reference: private System.Reflection.MethodInfo <Method>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_$Method$k__BackingField();
    // Get instance field reference: private System.Type[] <TypeParms>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_$TypeParms$k__BackingField();
    // Get instance field reference: private System.Type[] <TypeArgs>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_$TypeArgs$k__BackingField();
    // Get instance field reference: private System.Type[] <ParmTypes>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_$ParmTypes$k__BackingField();
    // private System.Reflection.MethodInfo get_Method()
    // Offset: 0x1D630DC
    ::System::Reflection::MethodInfo* get_Method();
    // private System.Void set_Method(System.Reflection.MethodInfo value)
    // Offset: 0x1D630E4
    void set_Method(::System::Reflection::MethodInfo* value);
    // private System.Type[] get_TypeParms()
    // Offset: 0x1D630EC
    ::ArrayW<::System::Type*> get_TypeParms();
    // private System.Void set_TypeParms(System.Type[] value)
    // Offset: 0x1D630F4
    void set_TypeParms(::ArrayW<::System::Type*> value);
    // private System.Type[] get_TypeArgs()
    // Offset: 0x1D630FC
    ::ArrayW<::System::Type*> get_TypeArgs();
    // private System.Void set_TypeArgs(System.Type[] value)
    // Offset: 0x1D63104
    void set_TypeArgs(::ArrayW<::System::Type*> value);
    // private System.Type[] get_ParmTypes()
    // Offset: 0x1D6310C
    ::ArrayW<::System::Type*> get_ParmTypes();
    // private System.Void set_ParmTypes(System.Type[] value)
    // Offset: 0x1D63114
    void set_ParmTypes(::ArrayW<::System::Type*> value);
    // public System.Void .ctor(System.Reflection.MethodInfo method)
    // Offset: 0x1D5B050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericMethodHelper* New_ctor(::System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::GenericMethodHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericMethodHelper*, creationType>(method)));
    }
    // public System.Type[] GetTypeArguments(System.Object[] argList)
    // Offset: 0x1D5B1F4
    ::ArrayW<::System::Type*> GetTypeArguments(::ArrayW<::Il2CppObject*> argList);
    // private System.Void TryApplyArgType(System.Type parmType, System.Type argType)
    // Offset: 0x1D6311C
    void TryApplyArgType(::System::Type* parmType, ::System::Type* argType);
    // private System.Void ApplyArgType(System.Type parmType, System.Type argType)
    // Offset: 0x1D632BC
    void ApplyArgType(::System::Type* parmType, ::System::Type* argType);
    // private System.Boolean IsAssignableToGenericType(System.Type givenType, System.Type genericType)
    // Offset: 0x1D633C4
    bool IsAssignableToGenericType(::System::Type* givenType, ::System::Type* genericType);
  }; // NUnit.Framework.Internal.GenericMethodHelper
  #pragma pack(pop)
  static check_size<sizeof(GenericMethodHelper), 40 + sizeof(::ArrayW<::System::Type*>)> __NUnit_Framework_Internal_GenericMethodHelperSizeCheck;
  static_assert(sizeof(GenericMethodHelper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (NUnit::Framework::Internal::GenericMethodHelper::*)()>(&NUnit::Framework::Internal::GenericMethodHelper::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::GenericMethodHelper::*)(::System::Reflection::MethodInfo*)>(&NUnit::Framework::Internal::GenericMethodHelper::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::get_TypeParms
// Il2CppName: get_TypeParms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (NUnit::Framework::Internal::GenericMethodHelper::*)()>(&NUnit::Framework::Internal::GenericMethodHelper::get_TypeParms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "get_TypeParms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::set_TypeParms
// Il2CppName: set_TypeParms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::GenericMethodHelper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::GenericMethodHelper::set_TypeParms)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "set_TypeParms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::get_TypeArgs
// Il2CppName: get_TypeArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (NUnit::Framework::Internal::GenericMethodHelper::*)()>(&NUnit::Framework::Internal::GenericMethodHelper::get_TypeArgs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "get_TypeArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::set_TypeArgs
// Il2CppName: set_TypeArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::GenericMethodHelper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::GenericMethodHelper::set_TypeArgs)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "set_TypeArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::get_ParmTypes
// Il2CppName: get_ParmTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (NUnit::Framework::Internal::GenericMethodHelper::*)()>(&NUnit::Framework::Internal::GenericMethodHelper::get_ParmTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "get_ParmTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::set_ParmTypes
// Il2CppName: set_ParmTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::GenericMethodHelper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::GenericMethodHelper::set_ParmTypes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "set_ParmTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::GetTypeArguments
// Il2CppName: GetTypeArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (NUnit::Framework::Internal::GenericMethodHelper::*)(::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::GenericMethodHelper::GetTypeArguments)> {
  static const MethodInfo* get() {
    static auto* argList = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "GetTypeArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argList});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::TryApplyArgType
// Il2CppName: TryApplyArgType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::GenericMethodHelper::*)(::System::Type*, ::System::Type*)>(&NUnit::Framework::Internal::GenericMethodHelper::TryApplyArgType)> {
  static const MethodInfo* get() {
    static auto* parmType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "TryApplyArgType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parmType, argType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::ApplyArgType
// Il2CppName: ApplyArgType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::GenericMethodHelper::*)(::System::Type*, ::System::Type*)>(&NUnit::Framework::Internal::GenericMethodHelper::ApplyArgType)> {
  static const MethodInfo* get() {
    static auto* parmType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "ApplyArgType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parmType, argType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::GenericMethodHelper::IsAssignableToGenericType
// Il2CppName: IsAssignableToGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::GenericMethodHelper::*)(::System::Type*, ::System::Type*)>(&NUnit::Framework::Internal::GenericMethodHelper::IsAssignableToGenericType)> {
  static const MethodInfo* get() {
    static auto* givenType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* genericType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::GenericMethodHelper*), "IsAssignableToGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{givenType, genericType});
  }
};
