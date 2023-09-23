#pragma once
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::ISerializationSurrogate.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ISerializationSurrogate::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::ISerializationSurrogate::GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ISerializationSurrogate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ISerializationSurrogate>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ISerializationSurrogate.SetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::ISerializationSurrogate::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::ISurrogateSelector)>(&System::Runtime::Serialization::ISerializationSurrogate::SetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::ISerializationSurrogate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ISerializationSurrogate>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::ISerializationSurrogate::GetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ISerializationSurrogate>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, info, context);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::ISerializationSurrogate::SetObjectData(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ISurrogateSelector selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ISerializationSurrogate>::get(),
                            "SetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, info, context, selector);
}
