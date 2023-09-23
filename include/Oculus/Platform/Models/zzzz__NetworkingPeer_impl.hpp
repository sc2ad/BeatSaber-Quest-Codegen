#pragma once
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/zzzz__PeerConnectionState_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::NetworkingPeer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::NetworkingPeer::*)(uint64_t, Oculus::Platform::PeerConnectionState)>(&Oculus::Platform::Models::NetworkingPeer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25a1b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::PeerConnectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Models::NetworkingPeer.get_ID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Models::NetworkingPeer::*)()>(&Oculus::Platform::Models::NetworkingPeer::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "get_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Models::NetworkingPeer.set_ID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::NetworkingPeer::*)(uint64_t)>(&Oculus::Platform::Models::NetworkingPeer::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "set_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Models::NetworkingPeer.get_State
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::PeerConnectionState (Oculus::Platform::Models::NetworkingPeer::*)()>(&Oculus::Platform::Models::NetworkingPeer::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "get_State",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Models::NetworkingPeer.set_State
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::NetworkingPeer::*)(Oculus::Platform::PeerConnectionState)>(&Oculus::Platform::Models::NetworkingPeer::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "set_State",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::PeerConnectionState>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::NetworkingPeer::__set__ID_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::NetworkingPeer::__get__ID_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::NetworkingPeer::__set__State_k__BackingField(Oculus::Platform::PeerConnectionState value)  {
::cordl_internals::setInstanceField<Oculus::Platform::PeerConnectionState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::PeerConnectionState>(value));
}
constexpr Oculus::Platform::PeerConnectionState Oculus::Platform::Models::NetworkingPeer::__get__State_k__BackingField() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::PeerConnectionState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "Oculus::Platform::PeerConnectionState", modifiers: "", def_value: None }]
 Oculus::Platform::Models::NetworkingPeer::NetworkingPeer(uint64_t id, Oculus::Platform::PeerConnectionState state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetworkingPeer>(id, state))) {}
 void Oculus::Platform::Models::NetworkingPeer::_ctor(uint64_t id, Oculus::Platform::PeerConnectionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::PeerConnectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, state);
}
 uint64_t Oculus::Platform::Models::NetworkingPeer::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "get_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Oculus::Platform::Models::NetworkingPeer::set_ID(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "set_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Oculus::Platform::PeerConnectionState Oculus::Platform::Models::NetworkingPeer::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "get_State",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::PeerConnectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 void Oculus::Platform::Models::NetworkingPeer::set_State(Oculus::Platform::PeerConnectionState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetworkingPeer>::get(),
                            "set_State",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::PeerConnectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
