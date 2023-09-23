#pragma once
#include "System/Runtime/Serialization/zzzz__SurrogateForCyclicalReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::SurrogateForCyclicalReference.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SurrogateForCyclicalReference::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SurrogateForCyclicalReference::GetObjectData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x234c0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateForCyclicalReference>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SurrogateForCyclicalReference.SetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::SurrogateForCyclicalReference::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ISurrogateSelector)>(&System::Runtime::Serialization::SurrogateForCyclicalReference::SetObjectData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x234c1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateForCyclicalReference>::get(),
                            "SetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializationSurrogate
constexpr  System::Runtime::Serialization::SurrogateForCyclicalReference::operator System::Runtime::Serialization::ISerializationSurrogate() const noexcept {
return System::Runtime::Serialization::ISerializationSurrogate(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::SurrogateForCyclicalReference::__set_innerSurrogate(System::Runtime::Serialization::ISerializationSurrogate value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ISerializationSurrogate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ISerializationSurrogate>(value));
}
constexpr System::Runtime::Serialization::ISerializationSurrogate System::Runtime::Serialization::SurrogateForCyclicalReference::__get_innerSurrogate() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ISerializationSurrogate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Serialization::SurrogateForCyclicalReference::GetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateForCyclicalReference>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, info, context);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::SurrogateForCyclicalReference::SetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateForCyclicalReference>::get(),
                            "SetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, info, context, selector);
}
