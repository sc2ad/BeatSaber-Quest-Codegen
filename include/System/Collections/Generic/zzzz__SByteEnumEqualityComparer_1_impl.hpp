#pragma once
#include "System/Collections/Generic/zzzz__EnumEqualityComparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__SByteEnumEqualityComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Collections::Generic::SByteEnumEqualityComparer_1::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::SByteEnumEqualityComparer_1 System::Collections::Generic::SByteEnumEqualityComparer_1::New_ctor()  {
System::Collections::Generic::SByteEnumEqualityComparer_1 o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::SByteEnumEqualityComparer_1>())};
return o;
}
 void System::Collections::Generic::SByteEnumEqualityComparer_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SByteEnumEqualityComparer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::SByteEnumEqualityComparer_1 System::Collections::Generic::SByteEnumEqualityComparer_1::New_ctor(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context)  {
System::Collections::Generic::SByteEnumEqualityComparer_1 o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::SByteEnumEqualityComparer_1>(information, context))};
return o;
}
 void System::Collections::Generic::SByteEnumEqualityComparer_1::_ctor(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SByteEnumEqualityComparer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, information, context);
}
 int32_t System::Collections::Generic::SByteEnumEqualityComparer_1::GetHashCode(T obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::SByteEnumEqualityComparer_1>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
