#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::GlobalNamespace__AuthenticationToken__Platform(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::Test{0u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::OculusRift{1u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::OculusQuest{2u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::Steam{3u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::PS4{4u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::PS4Dev{5u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::PS4Cert{6u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::PS5{7u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::PS5Dev{8u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::PS5Cert{9u};
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform  GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform::Oculus{2u};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AuthenticationToken::*)(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, ::StringW, ::StringW, ::StringW)>(&GlobalNamespace::AuthenticationToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xd9c56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AuthenticationToken::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::AuthenticationToken::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xd9c57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AuthenticationToken (GlobalNamespace::AuthenticationToken::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::AuthenticationToken::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xd9c728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AuthenticationToken (*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::AuthenticationToken::Deserialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xd9c754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.FromHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&GlobalNamespace::AuthenticationToken::FromHex)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xd9c640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "FromHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.GetHexVal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(char16_t)>(&GlobalNamespace::AuthenticationToken::GetHexVal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xd9c90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "GetHexVal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.FromUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&GlobalNamespace::AuthenticationToken::FromUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xd9c610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "FromUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.ToHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::AuthenticationToken::ToHex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xd9c874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "ToHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AuthenticationToken.ToUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::AuthenticationToken::ToUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xd9c844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "ToUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>
constexpr  GlobalNamespace::AuthenticationToken::operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>() const {
return LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "platform", ty: "GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::AuthenticationToken::AuthenticationToken(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) noexcept : ::bs_hook::ValueTypeWrapper() {this->platform = platform;
this->userId = userId;
this->userName = userName;
this->sessionToken = sessionToken;
}
constexpr void GlobalNamespace::AuthenticationToken::__set_platform(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform GlobalNamespace::AuthenticationToken::__get_platform() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::AuthenticationToken::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::AuthenticationToken::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::AuthenticationToken::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::AuthenticationToken::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::AuthenticationToken::__set_sessionToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::AuthenticationToken::__get_sessionToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
 void GlobalNamespace::AuthenticationToken::_ctor(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, platform, userId, userName, sessionToken);
}
 void GlobalNamespace::AuthenticationToken::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer);
}
 GlobalNamespace::AuthenticationToken GlobalNamespace::AuthenticationToken::CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::AuthenticationToken, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, reader);
}
 GlobalNamespace::AuthenticationToken GlobalNamespace::AuthenticationToken::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::AuthenticationToken, false>(nullptr, ___internal_method, reader);
}
 ::ArrayW<uint8_t> GlobalNamespace::AuthenticationToken::FromHex(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "FromHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, str);
}
 uint8_t GlobalNamespace::AuthenticationToken::GetHexVal(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "GetHexVal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, c);
}
 ::ArrayW<uint8_t> GlobalNamespace::AuthenticationToken::FromUtf8(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "FromUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, str);
}
 ::StringW GlobalNamespace::AuthenticationToken::ToHex(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "ToHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
 ::StringW GlobalNamespace::AuthenticationToken::ToUtf8(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AuthenticationToken>::get(),
                            "ToUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
