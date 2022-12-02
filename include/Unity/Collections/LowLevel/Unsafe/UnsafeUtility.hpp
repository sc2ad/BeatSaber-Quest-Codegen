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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: Allocator
  struct Allocator;
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Forward declaring type: UnsafeUtility
  class UnsafeUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1082744
  // [StaticAccessorAttribute] Offset: 1082744
  class UnsafeUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean IsBlittable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool IsBlittable() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "IsBlittable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void Free(System.Void* memory, Unity.Collections.Allocator allocator)
    // Offset: 0x20231B4
    static void Free(void* memory, ::Unity::Collections::Allocator allocator);
    // static public System.Boolean IsBlittable(System.Type type)
    // Offset: 0x2023204
    static bool IsBlittable(::System::Type* type);
    // static private System.Boolean IsBlittableValueType(System.Type t)
    // Offset: 0x2023244
    static bool IsBlittableValueType(::System::Type* t);
    // static private System.String GetReasonForTypeNonBlittableImpl(System.Type t, System.String name)
    // Offset: 0x20232A8
    static ::StringW GetReasonForTypeNonBlittableImpl(::System::Type* t, ::StringW name);
    // static System.Boolean IsArrayBlittable(System.Array arr)
    // Offset: 0x202345C
    static bool IsArrayBlittable(::System::Array* arr);
    // static System.Boolean IsGenericListBlittable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool IsGenericListBlittable() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsGenericListBlittable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "IsGenericListBlittable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static System.String GetReasonForArrayNonBlittable(System.Array arr)
    // Offset: 0x2023490
    static ::StringW GetReasonForArrayNonBlittable(::System::Array* arr);
    // static System.String GetReasonForGenericListNonBlittable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::StringW GetReasonForGenericListNonBlittable() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForGenericListNonBlittable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "GetReasonForGenericListNonBlittable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public T ReadArrayElement(System.Void* source, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T ReadArrayElement(void* source, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "ReadArrayElement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(index)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, index);
    }
    // static public System.Void WriteArrayElement(System.Void* destination, System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void WriteArrayElement(void* destination, int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "WriteArrayElement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(destination), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, destination, index, value);
    }
    // static public System.Int32 SizeOf()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int SizeOf() {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "SizeOf", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
  }; // Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable
// Il2CppName: IsBlittable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::Unity::Collections::Allocator)>(&Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free)> {
  static const MethodInfo* get() {
    static auto* memory = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Allocator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memory, allocator});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable
// Il2CppName: IsBlittable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*), "IsBlittable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittableValueType
// Il2CppName: IsBlittableValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittableValueType)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*), "IsBlittableValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForTypeNonBlittableImpl
// Il2CppName: GetReasonForTypeNonBlittableImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*, ::StringW)>(&Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForTypeNonBlittableImpl)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*), "GetReasonForTypeNonBlittableImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, name});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsArrayBlittable
// Il2CppName: IsArrayBlittable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Array*)>(&Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsArrayBlittable)> {
  static const MethodInfo* get() {
    static auto* arr = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*), "IsArrayBlittable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arr});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsGenericListBlittable
// Il2CppName: IsGenericListBlittable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForArrayNonBlittable
// Il2CppName: GetReasonForArrayNonBlittable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Array*)>(&Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForArrayNonBlittable)> {
  static const MethodInfo* get() {
    static auto* arr = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*), "GetReasonForArrayNonBlittable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arr});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForGenericListNonBlittable
// Il2CppName: GetReasonForGenericListNonBlittable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElement
// Il2CppName: ReadArrayElement
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElement
// Il2CppName: WriteArrayElement
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf
// Il2CppName: SizeOf
// Cannot write MetadataGetter for generic methods!
