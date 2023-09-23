#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__CADSerializer_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::CADSerializer.DeserializeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (*)(System::IO::MemoryStream, System::Runtime::Remoting::Messaging::IMethodCallMessage)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2337774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "DeserializeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::CADSerializer.SerializeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream (*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23371c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "SerializeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::CADSerializer.DeserializeObjectSafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<uint8_t>)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2337d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "DeserializeObjectSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::CADSerializer.SerializeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::MemoryStream (*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Channels::CADSerializer::SerializeObject)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2337ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "SerializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::CADSerializer.DeserializeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::IO::MemoryStream)>(&System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2337e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "DeserializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage(System::IO::MemoryStream mem, System::Runtime::Remoting::Messaging::IMethodCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "DeserializeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(nullptr, ___internal_method, mem, msg);
}
 System::IO::MemoryStream System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "SerializeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::MemoryStream, false>(nullptr, ___internal_method, msg);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe(::ArrayW<uint8_t> mem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "DeserializeObjectSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, mem);
}
 System::IO::MemoryStream System::Runtime::Remoting::Channels::CADSerializer::SerializeObject(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "SerializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::MemoryStream, false>(nullptr, ___internal_method, obj);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject(System::IO::MemoryStream mem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::CADSerializer>::get(),
                            "DeserializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, mem);
}
