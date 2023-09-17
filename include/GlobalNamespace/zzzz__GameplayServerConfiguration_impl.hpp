#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__DiscoveryPolicy_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__InvitePolicy_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerConfiguration::*)(int32_t, ::GlobalNamespace::DiscoveryPolicy, ::GlobalNamespace::InvitePolicy, ::GlobalNamespace::GameplayServerMode, ::GlobalNamespace::SongSelectionMode, ::GlobalNamespace::GameplayServerControlSettings)>(&::GlobalNamespace::GameplayServerConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdabd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DiscoveryPolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::InvitePolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongSelectionMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerControlSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(&::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xdaebe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdaec50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xdaec54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::GameplayServerConfiguration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GameplayServerConfiguration::*)()>(&::GlobalNamespace::GameplayServerConfiguration::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdaed1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::GameplayServerConfiguration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::GlobalNamespace::GameplayServerConfiguration>, ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(&::GlobalNamespace::GameplayServerConfiguration::op_Equality)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdaed5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::GlobalNamespace::GameplayServerConfiguration>, ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(&::GlobalNamespace::GameplayServerConfiguration::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdaed60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::GameplayServerConfiguration::Serialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdaed78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xdaedf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::GameplayServerConfiguration::Deserialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xdaee28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.WithMaxPlayerCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerConfiguration::*)(int32_t)>(&::GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdaeec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "WithMaxPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>
constexpr  ::GlobalNamespace::GameplayServerConfiguration::operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>() const {
return ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>
constexpr  ::GlobalNamespace::GameplayServerConfiguration::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>() const {
return ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "maxPlayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "discoveryPolicy", ty: "::GlobalNamespace::DiscoveryPolicy", modifiers: "", def_value: Some("{}") }, CppParam { name: "invitePolicy", ty: "::GlobalNamespace::InvitePolicy", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerMode", ty: "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerConfiguration::GameplayServerConfiguration(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy, ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept : ::bs_hook::ValueTypeWrapper() {this->maxPlayerCount = maxPlayerCount;
this->discoveryPolicy = discoveryPolicy;
this->invitePolicy = invitePolicy;
this->gameplayServerMode = gameplayServerMode;
this->songSelectionMode = songSelectionMode;
this->gameplayServerControlSettings = gameplayServerControlSettings;
}
constexpr void ::GlobalNamespace::GameplayServerConfiguration::__set_maxPlayerCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::GameplayServerConfiguration::__get_maxPlayerCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::GameplayServerConfiguration::__set_discoveryPolicy(::GlobalNamespace::DiscoveryPolicy value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DiscoveryPolicy, 0x4>(this->__instance, std::forward<::GlobalNamespace::DiscoveryPolicy>(value));
}
constexpr ::GlobalNamespace::DiscoveryPolicy ::GlobalNamespace::GameplayServerConfiguration::__get_discoveryPolicy() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DiscoveryPolicy, 0x4>(this->__instance);
}
constexpr void ::GlobalNamespace::GameplayServerConfiguration::__set_invitePolicy(::GlobalNamespace::InvitePolicy value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::InvitePolicy, 0x8>(this->__instance, std::forward<::GlobalNamespace::InvitePolicy>(value));
}
constexpr ::GlobalNamespace::InvitePolicy ::GlobalNamespace::GameplayServerConfiguration::__get_invitePolicy() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::InvitePolicy, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::GameplayServerConfiguration::__set_gameplayServerMode(::GlobalNamespace::GameplayServerMode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerMode, 0xc>(this->__instance, std::forward<::GlobalNamespace::GameplayServerMode>(value));
}
constexpr ::GlobalNamespace::GameplayServerMode ::GlobalNamespace::GameplayServerConfiguration::__get_gameplayServerMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerMode, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::GameplayServerConfiguration::__set_songSelectionMode(::GlobalNamespace::SongSelectionMode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongSelectionMode, 0x10>(this->__instance, std::forward<::GlobalNamespace::SongSelectionMode>(value));
}
constexpr ::GlobalNamespace::SongSelectionMode ::GlobalNamespace::GameplayServerConfiguration::__get_songSelectionMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongSelectionMode, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::GameplayServerConfiguration::__set_gameplayServerControlSettings(::GlobalNamespace::GameplayServerControlSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerControlSettings, 0x14>(this->__instance, std::forward<::GlobalNamespace::GameplayServerControlSettings>(value));
}
constexpr ::GlobalNamespace::GameplayServerControlSettings ::GlobalNamespace::GameplayServerConfiguration::__get_gameplayServerControlSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerControlSettings, 0x14>(this->__instance);
}
 void ::GlobalNamespace::GameplayServerConfiguration::_ctor(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy, ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DiscoveryPolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::InvitePolicy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongSelectionMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerControlSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxPlayerCount, discoveryPolicy, invitePolicy, gameplayServerMode, songSelectionMode, gameplayServerControlSettings);
}
 bool ::GlobalNamespace::GameplayServerConfiguration::Equals(ByRef<::GlobalNamespace::GameplayServerConfiguration> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool ::GlobalNamespace::GameplayServerConfiguration::Equals(::GlobalNamespace::GameplayServerConfiguration other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool ::GlobalNamespace::GameplayServerConfiguration::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t ::GlobalNamespace::GameplayServerConfiguration::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::GlobalNamespace::GameplayServerConfiguration::op_Equality(ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ByRef<::GlobalNamespace::GameplayServerConfiguration> b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 bool ::GlobalNamespace::GameplayServerConfiguration::op_Inequality(ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ByRef<::GlobalNamespace::GameplayServerConfiguration> b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 void ::GlobalNamespace::GameplayServerConfiguration::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer);
}
 ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, reader);
}
 ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::GameplayServerConfiguration::Deserialize(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(nullptr, ___internal_method, reader);
}
 ::GlobalNamespace::GameplayServerConfiguration ::GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount(int32_t maxPlayerCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                            "WithMaxPlayerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxPlayerCount);
}
} // end anonymous namespace
