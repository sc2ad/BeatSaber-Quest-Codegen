#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__sockaddr_dl_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::MacOsStructs::sockaddr_dl.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::*)(::cordl_internals::intptr_t)>(&System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x285d928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsStructs::sockaddr_dl>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "sdl_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_index", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_nlen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_alen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_slen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::sockaddr_dl(uint8_t sdl_len, uint8_t sdl_family, uint16_t sdl_index, uint8_t sdl_type, uint8_t sdl_nlen, uint8_t sdl_alen, uint8_t sdl_slen, ::ArrayW<uint8_t> sdl_data) noexcept : ::bs_hook::ValueTypeWrapper() {this->sdl_len = sdl_len;
this->sdl_family = sdl_family;
this->sdl_index = sdl_index;
this->sdl_type = sdl_type;
this->sdl_nlen = sdl_nlen;
this->sdl_alen = sdl_alen;
this->sdl_slen = sdl_slen;
this->sdl_data = sdl_data;
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_len(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_len() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_family(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_family() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_index(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_index() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_type(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_type() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_nlen(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x5>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_nlen() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_alen(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x6>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_alen() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x6>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_slen(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x7>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_slen() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x7>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__set_sdl_data(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::__get_sdl_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance);
}
 void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsStructs::sockaddr_dl>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ptr);
}
