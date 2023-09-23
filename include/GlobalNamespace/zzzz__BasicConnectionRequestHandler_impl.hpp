#pragma once
#include "GlobalNamespace/zzzz__BasicConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
//  Writing Method size for method: GlobalNamespace::BasicConnectionRequestHandler.get_secret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BasicConnectionRequestHandler::*)()>(&GlobalNamespace::BasicConnectionRequestHandler::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9c9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BasicConnectionRequestHandler.set_secret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicConnectionRequestHandler::*)(::StringW)>(&GlobalNamespace::BasicConnectionRequestHandler::set_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9c9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "set_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BasicConnectionRequestHandler.GetConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicConnectionRequestHandler::*)(LiteNetLib::Utils::NetDataWriter, ::StringW, ::StringW, bool)>(&GlobalNamespace::BasicConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xd9c9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BasicConnectionRequestHandler.ValidateConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BasicConnectionRequestHandler::*)(LiteNetLib::Utils::NetDataReader, ByRef<::StringW>, ByRef<::StringW>, ByRef<bool>)>(&GlobalNamespace::BasicConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xd9ca58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "ValidateConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BasicConnectionRequestHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicConnectionRequestHandler::*)()>(&GlobalNamespace::BasicConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9cb14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectionRequestHandler
constexpr  GlobalNamespace::BasicConnectionRequestHandler::operator GlobalNamespace::IConnectionRequestHandler() const noexcept {
return GlobalNamespace::IConnectionRequestHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BasicConnectionRequestHandler::__set__secret_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::BasicConnectionRequestHandler::__get__secret_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::BasicConnectionRequestHandler::get_secret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BasicConnectionRequestHandler::set_secret(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "set_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BasicConnectionRequestHandler::GetConnectionMessage(LiteNetLib::Utils::NetDataWriter writer, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, userId, userName, isConnectionOwner);
}
 bool GlobalNamespace::BasicConnectionRequestHandler::ValidateConnectionMessage(LiteNetLib::Utils::NetDataReader reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            "ValidateConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, userId, userName, isConnectionOwner);
}
// Ctor Parameters []
 GlobalNamespace::BasicConnectionRequestHandler::BasicConnectionRequestHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BasicConnectionRequestHandler>())) {}
 void GlobalNamespace::BasicConnectionRequestHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BasicConnectionRequestHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
