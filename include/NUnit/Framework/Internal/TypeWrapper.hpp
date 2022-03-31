// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.ITypeInfo
#include "NUnit/Framework/Interfaces/ITypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TypeWrapper
  class TypeWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TypeWrapper*, "NUnit.Framework.Internal", "TypeWrapper");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TypeWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeWrapper : public ::Il2CppObject/*, public ::NUnit::Framework::Interfaces::ITypeInfo*/ {
    public:
    // Nested type: ::NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x12449C4
    // private System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::ITypeInfo
    operator ::NUnit::Framework::Interfaces::ITypeInfo() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::ITypeInfo*>(this);
    }
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return Type;
    }
    // Get instance field reference: private System.Type <Type>k__BackingField
    ::System::Type*& dyn_$Type$k__BackingField();
    // public System.Type get_Type()
    // Offset: 0x29B947C
    ::System::Type* get_Type();
    // private System.Void set_Type(System.Type value)
    // Offset: 0x29B9484
    void set_Type(::System::Type* value);
    // public NUnit.Framework.Interfaces.ITypeInfo get_BaseType()
    // Offset: 0x29B948C
    ::NUnit::Framework::Interfaces::ITypeInfo* get_BaseType();
    // public System.String get_FullName()
    // Offset: 0x29B9520
    ::StringW get_FullName();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x29B9544
    ::System::Reflection::Assembly* get_Assembly();
    // public System.String get_Namespace()
    // Offset: 0x29B9574
    ::StringW get_Namespace();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x29B9598
    bool get_IsAbstract();
    // public System.Boolean get_IsGenericType()
    // Offset: 0x29B95C0
    bool get_IsGenericType();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x29B9600
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x29B9630
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsSealed()
    // Offset: 0x29B9660
    bool get_IsSealed();
    // public System.Boolean get_IsStaticClass()
    // Offset: 0x29B9688
    bool get_IsStaticClass();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x29ACFCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeWrapper* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TypeWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeWrapper*, creationType>(type)));
    }
    // public System.Boolean IsType(System.Type type)
    // Offset: 0x29B95F0
    bool IsType(::System::Type* type);
    // public System.String GetDisplayName()
    // Offset: 0x29B96E8
    ::StringW GetDisplayName();
    // public System.String GetDisplayName(System.Object[] args)
    // Offset: 0x29B9750
    ::StringW GetDisplayName(::ArrayW<::Il2CppObject*> args);
    // public NUnit.Framework.Interfaces.ITypeInfo MakeGenericType(System.Type[] typeArgs)
    // Offset: 0x29B97C8
    ::NUnit::Framework::Interfaces::ITypeInfo* MakeGenericType(::ArrayW<::System::Type*> typeArgs);
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0x29B985C
    ::System::Type* GetGenericTypeDefinition();
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TypeWrapper::GetCustomAttributes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TypeWrapper::IsDefined");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean HasMethodWithAttribute(System.Type attributeType)
    // Offset: 0x29B9880
    bool HasMethodWithAttribute(::System::Type* attributeType);
    // public NUnit.Framework.Interfaces.IMethodInfo[] GetMethods(System.Reflection.BindingFlags flags)
    // Offset: 0x29B98F8
    ::ArrayW<::NUnit::Framework::Interfaces::IMethodInfo*> GetMethods(::System::Reflection::BindingFlags flags);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] argTypes)
    // Offset: 0x29B9A40
    ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::System::Type*> argTypes);
    // public System.Boolean HasConstructor(System.Type[] argTypes)
    // Offset: 0x29B9B2C
    bool HasConstructor(::ArrayW<::System::Type*> argTypes);
    // public System.Object Construct(System.Object[] args)
    // Offset: 0x29B9B48
    ::Il2CppObject* Construct(::ArrayW<::Il2CppObject*> args);
    // public override System.String ToString()
    // Offset: 0x29B9BC0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // NUnit.Framework.Internal.TypeWrapper
  #pragma pack(pop)
  static check_size<sizeof(TypeWrapper), 16 + sizeof(::System::Type*)> __NUnit_Framework_Internal_TypeWrapperSizeCheck;
  static_assert(sizeof(TypeWrapper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TypeWrapper::*)(::System::Type*)>(&NUnit::Framework::Internal::TypeWrapper::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsAbstract
// Il2CppName: get_IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsAbstract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsGenericType
// Il2CppName: get_IsGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsGenericType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_ContainsGenericParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsGenericTypeDefinition
// Il2CppName: get_IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsGenericTypeDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsSealed
// Il2CppName: get_IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsSealed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::get_IsStaticClass
// Il2CppName: get_IsStaticClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::get_IsStaticClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "get_IsStaticClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::IsType
// Il2CppName: IsType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)(::System::Type*)>(&NUnit::Framework::Internal::TypeWrapper::IsType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "IsType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::GetDisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TypeWrapper::*)(::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::TypeWrapper::GetDisplayName)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::MakeGenericType
// Il2CppName: MakeGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITypeInfo* (NUnit::Framework::Internal::TypeWrapper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::TypeWrapper::MakeGenericType)> {
  static const MethodInfo* get() {
    static auto* typeArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "MakeGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeArgs});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetGenericTypeDefinition
// Il2CppName: GetGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::GetGenericTypeDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::IsDefined
// Il2CppName: IsDefined
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::HasMethodWithAttribute
// Il2CppName: HasMethodWithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)(::System::Type*)>(&NUnit::Framework::Internal::TypeWrapper::HasMethodWithAttribute)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "HasMethodWithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetMethods
// Il2CppName: GetMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::NUnit::Framework::Interfaces::IMethodInfo*> (NUnit::Framework::Internal::TypeWrapper::*)(::System::Reflection::BindingFlags)>(&NUnit::Framework::Internal::TypeWrapper::GetMethods)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::GetConstructor
// Il2CppName: GetConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (NUnit::Framework::Internal::TypeWrapper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::TypeWrapper::GetConstructor)> {
  static const MethodInfo* get() {
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "GetConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argTypes});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::HasConstructor
// Il2CppName: HasConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TypeWrapper::*)(::ArrayW<::System::Type*>)>(&NUnit::Framework::Internal::TypeWrapper::HasConstructor)> {
  static const MethodInfo* get() {
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "HasConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argTypes});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::TypeWrapper::*)(::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::TypeWrapper::Construct)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeWrapper::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TypeWrapper::*)()>(&NUnit::Framework::Internal::TypeWrapper::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeWrapper*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
