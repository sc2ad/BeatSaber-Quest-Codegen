// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IMethodInfo
#include "NUnit/Framework/Interfaces/IMethodInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
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
  // Forward declaring type: MethodWrapper
  class MethodWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::MethodWrapper);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::MethodWrapper*, "NUnit.Framework.Internal", "MethodWrapper");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.MethodWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodWrapper : public ::Il2CppObject/*, public ::NUnit::Framework::Interfaces::IMethodInfo*/ {
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
    // [DebuggerBrowsableAttribute] Offset: 0x1235FD0
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x123600C
    // private System.Reflection.MethodInfo <MethodInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::MethodInfo* MethodInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::IMethodInfo
    operator ::NUnit::Framework::Interfaces::IMethodInfo() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::IMethodInfo*>(this);
    }
    // Get instance field reference: private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    ::NUnit::Framework::Interfaces::ITypeInfo*& dyn_$TypeInfo$k__BackingField();
    // Get instance field reference: private System.Reflection.MethodInfo <MethodInfo>k__BackingField
    ::System::Reflection::MethodInfo*& dyn_$MethodInfo$k__BackingField();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x28B3D98
    ::NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x28B3DA0
    void set_TypeInfo(::NUnit::Framework::Interfaces::ITypeInfo* value);
    // public System.Reflection.MethodInfo get_MethodInfo()
    // Offset: 0x28B3DA8
    ::System::Reflection::MethodInfo* get_MethodInfo();
    // private System.Void set_MethodInfo(System.Reflection.MethodInfo value)
    // Offset: 0x28B3DB0
    void set_MethodInfo(::System::Reflection::MethodInfo* value);
    // public System.String get_Name()
    // Offset: 0x28B3DB8
    ::StringW get_Name();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x28B3DD8
    bool get_IsAbstract();
    // public System.Boolean get_IsPublic()
    // Offset: 0x28B3DF4
    bool get_IsPublic();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x28B3E10
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0x28B3E34
    bool get_IsGenericMethodDefinition();
    // public NUnit.Framework.Interfaces.ITypeInfo get_ReturnType()
    // Offset: 0x28B3E58
    ::NUnit::Framework::Interfaces::ITypeInfo* get_ReturnType();
    // public System.Void .ctor(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0x28B3CA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodWrapper* New_ctor(::System::Type* type, ::System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::MethodWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodWrapper*, creationType>(type, method)));
    }
    // public NUnit.Framework.Interfaces.IParameterInfo[] GetParameters()
    // Offset: 0x28B3EDC
    ::ArrayW<::NUnit::Framework::Interfaces::IParameterInfo*> GetParameters();
    // public NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0x28B4050
    ::NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(::ArrayW<::System::Type*> typeArguments);
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::ArrayW<T> GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::MethodWrapper::GetCustomAttributes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::MethodWrapper::IsDefined");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, inherit);
    }
    // public System.Object Invoke(System.Object fixture, params System.Object[] args)
    // Offset: 0x28B4160
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, ::ArrayW<::Il2CppObject*> args);
    // public override System.String ToString()
    // Offset: 0x28B44B4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // NUnit.Framework.Internal.MethodWrapper
  #pragma pack(pop)
  static check_size<sizeof(MethodWrapper), 24 + sizeof(::System::Reflection::MethodInfo*)> __NUnit_Framework_Internal_MethodWrapperSizeCheck;
  static_assert(sizeof(MethodWrapper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_TypeInfo
// Il2CppName: get_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_TypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::set_TypeInfo
// Il2CppName: set_TypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::MethodWrapper::*)(::NUnit::Framework::Interfaces::ITypeInfo*)>(&NUnit::Framework::Internal::MethodWrapper::set_TypeInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITypeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "set_TypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_MethodInfo
// Il2CppName: get_MethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_MethodInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_MethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::set_MethodInfo
// Il2CppName: set_MethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::MethodWrapper::*)(::System::Reflection::MethodInfo*)>(&NUnit::Framework::Internal::MethodWrapper::set_MethodInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "set_MethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_IsAbstract
// Il2CppName: get_IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_IsAbstract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_IsPublic
// Il2CppName: get_IsPublic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_IsPublic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_IsPublic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_ContainsGenericParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_IsGenericMethodDefinition
// Il2CppName: get_IsGenericMethodDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_IsGenericMethodDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_IsGenericMethodDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::GetParameters
// Il2CppName: GetParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::NUnit::Framework::Interfaces::IParameterInfo*> (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::GetParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "GetParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::MakeGenericMethod
// Il2CppName: MakeGenericMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::IMethodInfo* (NUnit::Framework::Internal::MethodWrapper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::MethodWrapper::MakeGenericMethod)> {
  static const MethodInfo* get() {
    static auto* typeArguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "MakeGenericMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeArguments});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::IsDefined
// Il2CppName: IsDefined
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::MethodWrapper::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::MethodWrapper::Invoke)> {
  static const MethodInfo* get() {
    static auto* fixture = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixture, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::MethodWrapper::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::MethodWrapper::*)()>(&NUnit::Framework::Internal::MethodWrapper::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::MethodWrapper*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
