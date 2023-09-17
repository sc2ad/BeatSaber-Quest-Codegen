#pragma once
namespace {
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs>)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.RegisterConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.RegisterDisconnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int32_t>)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::System::Guid, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, messageId, callback);
}
 void ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                            "RegisterConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                            "RegisterDisconnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send(::System::Guid messageId, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, messageId, data);
}
} // end anonymous namespace
