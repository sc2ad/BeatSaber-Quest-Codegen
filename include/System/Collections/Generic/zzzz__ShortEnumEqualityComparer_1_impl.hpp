#pragma once
#include "System/Collections/Generic/zzzz__EnumEqualityComparer_1_impl.hpp"
namespace {
#include "System/Collections/Generic/zzzz__ShortEnumEqualityComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::ShortEnumEqualityComparer_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::ShortEnumEqualityComparer_1::*)()>(&::System::Collections::Generic::ShortEnumEqualityComparer_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ShortEnumEqualityComparer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ShortEnumEqualityComparer_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::ShortEnumEqualityComparer_1::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::ShortEnumEqualityComparer_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ShortEnumEqualityComparer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ShortEnumEqualityComparer_1.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::ShortEnumEqualityComparer_1::*)(T)>(&::System::Collections::Generic::ShortEnumEqualityComparer_1::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::ShortEnumEqualityComparer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ShortEnumEqualityComparer_1>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Collections::Generic::ShortEnumEqualityComparer_1::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::Generic::ShortEnumEqualityComparer_1::ShortEnumEqualityComparer_1()  : ::System::Collections::Generic::EnumEqualityComparer_1<T>(THROW_UNLESS(::il2cpp_utils::New<ShortEnumEqualityComparer_1>())) {}
 void ::System::Collections::Generic::ShortEnumEqualityComparer_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ShortEnumEqualityComparer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "information", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Collections::Generic::ShortEnumEqualityComparer_1::ShortEnumEqualityComparer_1(::System::Runtime::Serialization::SerializationInfo information, ::System::Runtime::Serialization::StreamingContext context)  : ::System::Collections::Generic::EnumEqualityComparer_1<T>(THROW_UNLESS(::il2cpp_utils::New<ShortEnumEqualityComparer_1>(information, context))) {}
 void ::System::Collections::Generic::ShortEnumEqualityComparer_1::_ctor(::System::Runtime::Serialization::SerializationInfo information, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ShortEnumEqualityComparer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, information, context);
}
 int32_t ::System::Collections::Generic::ShortEnumEqualityComparer_1::GetHashCode(T obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ShortEnumEqualityComparer_1>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
} // end anonymous namespace
