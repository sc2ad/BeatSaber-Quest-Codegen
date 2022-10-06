// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree
namespace ModestTree {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Forward declaring type: TypeExtensions
  class TypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ModestTree::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions*, "ModestTree", "TypeExtensions");
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeExtensions : public ::Il2CppObject {
    public:
    // Nested type: ::ModestTree::TypeExtensions::$GetParentTypes$d__28
    class $GetParentTypes$d__28;
    // Nested type: ::ModestTree::TypeExtensions::$$c__DisplayClass35_0
    class $$c__DisplayClass35_0;
    // Nested type: ::ModestTree::TypeExtensions::$$c__DisplayClass35_1
    class $$c__DisplayClass35_1;
    // Nested type: ::ModestTree::TypeExtensions::$$c__DisplayClass39_0
    class $$c__DisplayClass39_0;
    // Nested type: ::ModestTree::TypeExtensions::$$c__DisplayClass39_1
    class $$c__DisplayClass39_1;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isClosedGenericType
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _get__isClosedGenericType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isClosedGenericType
    static void _set__isClosedGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isOpenGenericType
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _get__isOpenGenericType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isOpenGenericType
    static void _set__isOpenGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isValueType
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _get__isValueType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _isValueType
    static void _set__isValueType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> _interfaces
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*>>* _get__interfaces();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Type[]> _interfaces
    static void _set__interfaces(::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*>>* value);
    // static private System.Void .cctor()
    // Offset: 0x17737AC
    static void _cctor();
    // static public System.Boolean DerivesFrom(System.Type a)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool DerivesFrom(::System::Type* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::DerivesFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "DerivesFrom", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, a);
    }
    // static public System.Boolean DerivesFrom(System.Type a, System.Type b)
    // Offset: 0x17705A4
    static bool DerivesFrom(::System::Type* a, ::System::Type* b);
    // static public System.Boolean DerivesFromOrEqual(System.Type a)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool DerivesFromOrEqual(::System::Type* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::DerivesFromOrEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "DerivesFromOrEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, a);
    }
    // static public System.Boolean DerivesFromOrEqual(System.Type a, System.Type b)
    // Offset: 0x177081C
    static bool DerivesFromOrEqual(::System::Type* a, ::System::Type* b);
    // static public System.Boolean IsAssignableToGenericType(System.Type givenType, System.Type genericType)
    // Offset: 0x1772A3C
    static bool IsAssignableToGenericType(::System::Type* givenType, ::System::Type* genericType);
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0x1772D54
    static bool IsEnum(::System::Type* type);
    // static public System.Boolean IsValueType(System.Type type)
    // Offset: 0x1772D74
    static bool IsValueType(::System::Type* type);
    // static public System.Reflection.MethodInfo[] DeclaredInstanceMethods(System.Type type)
    // Offset: 0x1772E70
    static ::ArrayW<::System::Reflection::MethodInfo*> DeclaredInstanceMethods(::System::Type* type);
    // static public System.Reflection.PropertyInfo[] DeclaredInstanceProperties(System.Type type)
    // Offset: 0x1772E94
    static ::ArrayW<::System::Reflection::PropertyInfo*> DeclaredInstanceProperties(::System::Type* type);
    // static public System.Reflection.FieldInfo[] DeclaredInstanceFields(System.Type type)
    // Offset: 0x1772EB8
    static ::ArrayW<::System::Reflection::FieldInfo*> DeclaredInstanceFields(::System::Type* type);
    // static public System.Type BaseType(System.Type type)
    // Offset: 0x1772EDC
    static ::System::Type* BaseType(::System::Type* type);
    // static public System.Boolean IsGenericType(System.Type type)
    // Offset: 0x1772EFC
    static bool IsGenericType(::System::Type* type);
    // static public System.Boolean IsGenericTypeDefinition(System.Type type)
    // Offset: 0x1772F1C
    static bool IsGenericTypeDefinition(::System::Type* type);
    // static public System.Boolean IsPrimitive(System.Type type)
    // Offset: 0x1772F3C
    static bool IsPrimitive(::System::Type* type);
    // static public System.Boolean IsInterface(System.Type type)
    // Offset: 0x1772F54
    static bool IsInterface(::System::Type* type);
    // static public System.Boolean ContainsGenericParameters(System.Type type)
    // Offset: 0x1772F6C
    static bool ContainsGenericParameters(::System::Type* type);
    // static public System.Boolean IsAbstract(System.Type type)
    // Offset: 0x1772F8C
    static bool IsAbstract(::System::Type* type);
    // static public System.Boolean IsSealed(System.Type type)
    // Offset: 0x1772FA4
    static bool IsSealed(::System::Type* type);
    // static public System.Reflection.MethodInfo Method(System.Delegate del)
    // Offset: 0x1772FBC
    static ::System::Reflection::MethodInfo* Method(::System::Delegate* del);
    // static public System.Type[] GenericArguments(System.Type type)
    // Offset: 0x1772FD4
    static ::ArrayW<::System::Type*> GenericArguments(::System::Type* type);
    // static public System.Type[] Interfaces(System.Type type)
    // Offset: 0x1772C54
    static ::ArrayW<::System::Type*> Interfaces(::System::Type* type);
    // static public System.Reflection.ConstructorInfo[] Constructors(System.Type type)
    // Offset: 0x1772FF4
    static ::ArrayW<::System::Reflection::ConstructorInfo*> Constructors(::System::Type* type);
    // static public System.Object GetDefaultValue(System.Type type)
    // Offset: 0x1773018
    static ::Il2CppObject* GetDefaultValue(::System::Type* type);
    // static public System.Boolean IsClosedGenericType(System.Type type)
    // Offset: 0x177309C
    static bool IsClosedGenericType(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Type> GetParentTypes(System.Type type)
    // Offset: 0x177320C
    static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetParentTypes(::System::Type* type);
    // static public System.Boolean IsOpenGenericType(System.Type type)
    // Offset: 0x17732C4
    static bool IsOpenGenericType(::System::Type* type);
    // static public T GetAttribute(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetAttribute(::System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "GetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
    // static public T TryGetAttribute(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T TryGetAttribute(::System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::TryGetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "TryGetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
    // static public System.Boolean HasAttribute(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x1773434
    static bool HasAttribute(::System::Reflection::MemberInfo* provider, ::ArrayW<::System::Type*> attributeTypes);
    // static public System.Boolean HasAttribute(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool HasAttribute(::System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::HasAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "HasAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> AllAttributes(System.Reflection.MemberInfo provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::MemberInfo* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::AllAttributes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "AllAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.MemberInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x17734B8
    static ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::MemberInfo* provider, ::ArrayW<::System::Type*> attributeTypes);
    // static public System.Boolean HasAttribute(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x17735F0
    static bool HasAttribute(::System::Reflection::ParameterInfo* provider, ::ArrayW<::System::Type*> attributeTypes);
    // static public System.Boolean HasAttribute(System.Reflection.ParameterInfo provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool HasAttribute(::System::Reflection::ParameterInfo* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::HasAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "HasAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> AllAttributes(System.Reflection.ParameterInfo provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::ParameterInfo* provider) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::ModestTree::TypeExtensions::AllAttributes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "TypeExtensions", "AllAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, provider);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> AllAttributes(System.Reflection.ParameterInfo provider, params System.Type[] attributeTypes)
    // Offset: 0x1773674
    static ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::ParameterInfo* provider, ::ArrayW<::System::Type*> attributeTypes);
  }; // ModestTree.TypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ModestTree::TypeExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFrom
// Il2CppName: DerivesFrom
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFrom
// Il2CppName: DerivesFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&ModestTree::TypeExtensions::DerivesFrom)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DerivesFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFromOrEqual
// Il2CppName: DerivesFromOrEqual
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DerivesFromOrEqual
// Il2CppName: DerivesFromOrEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&ModestTree::TypeExtensions::DerivesFromOrEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DerivesFromOrEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsAssignableToGenericType
// Il2CppName: IsAssignableToGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&ModestTree::TypeExtensions::IsAssignableToGenericType)> {
  static const MethodInfo* get() {
    static auto* givenType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* genericType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsAssignableToGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{givenType, genericType});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsEnum
// Il2CppName: IsEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsEnum)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsValueType
// Il2CppName: IsValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsValueType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DeclaredInstanceMethods
// Il2CppName: DeclaredInstanceMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (*)(::System::Type*)>(&ModestTree::TypeExtensions::DeclaredInstanceMethods)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DeclaredInstanceMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DeclaredInstanceProperties
// Il2CppName: DeclaredInstanceProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (*)(::System::Type*)>(&ModestTree::TypeExtensions::DeclaredInstanceProperties)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DeclaredInstanceProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::DeclaredInstanceFields
// Il2CppName: DeclaredInstanceFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (*)(::System::Type*)>(&ModestTree::TypeExtensions::DeclaredInstanceFields)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "DeclaredInstanceFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::BaseType
// Il2CppName: BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&ModestTree::TypeExtensions::BaseType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsGenericType
// Il2CppName: IsGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsGenericType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsGenericTypeDefinition
// Il2CppName: IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsGenericTypeDefinition)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsPrimitive
// Il2CppName: IsPrimitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsPrimitive)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsPrimitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsInterface
// Il2CppName: IsInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsInterface)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::ContainsGenericParameters
// Il2CppName: ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::ContainsGenericParameters)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsAbstract
// Il2CppName: IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsAbstract)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsSealed
// Il2CppName: IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsSealed)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::Method
// Il2CppName: Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Delegate*)>(&ModestTree::TypeExtensions::Method)> {
  static const MethodInfo* get() {
    static auto* del = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{del});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GenericArguments
// Il2CppName: GenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&ModestTree::TypeExtensions::GenericArguments)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "GenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::Interfaces
// Il2CppName: Interfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&ModestTree::TypeExtensions::Interfaces)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "Interfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::Constructors
// Il2CppName: Constructors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (*)(::System::Type*)>(&ModestTree::TypeExtensions::Constructors)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "Constructors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GetDefaultValue
// Il2CppName: GetDefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*)>(&ModestTree::TypeExtensions::GetDefaultValue)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "GetDefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsClosedGenericType
// Il2CppName: IsClosedGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsClosedGenericType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsClosedGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GetParentTypes
// Il2CppName: GetParentTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)(::System::Type*)>(&ModestTree::TypeExtensions::GetParentTypes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "GetParentTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::IsOpenGenericType
// Il2CppName: IsOpenGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&ModestTree::TypeExtensions::IsOpenGenericType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "IsOpenGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::GetAttribute
// Il2CppName: GetAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::TryGetAttribute
// Il2CppName: TryGetAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::ArrayW<::System::Type*>)>(&ModestTree::TypeExtensions::HasAttribute)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "HasAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, attributeTypes});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (*)(::System::Reflection::MemberInfo*, ::ArrayW<::System::Type*>)>(&ModestTree::TypeExtensions::AllAttributes)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "AllAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, attributeTypes});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::ParameterInfo*, ::ArrayW<::System::Type*>)>(&ModestTree::TypeExtensions::HasAttribute)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    static auto* attributeTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "HasAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, attributeTypes});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::HasAttribute
// Il2CppName: HasAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::TypeExtensions::AllAttributes
// Il2CppName: AllAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (*)(::System::Reflection::ParameterInfo*, ::ArrayW<::System::Type*>)>(&ModestTree::TypeExtensions::AllAttributes)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    static auto* attributeTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions*), "AllAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, attributeTypes});
  }
};
