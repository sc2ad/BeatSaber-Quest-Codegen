#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::*)(UnityEngine::LogType, ::StringW)>(&GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x287d688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Type", ty: "UnityEngine::LogType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog(UnityEngine::LogType Type, ::StringW Message) noexcept : ::bs_hook::ValueTypeWrapper() {this->Type = Type;
this->Message = Message;
}
constexpr void GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::__set_Type(UnityEngine::LogType value)  {
::cordl_internals::setInstanceField<UnityEngine::LogType, 0x0>(this->__instance, std::forward<UnityEngine::LogType>(value));
}
constexpr UnityEngine::LogType GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::__get_Type() const {
return ::cordl_internals::getInstanceField<UnityEngine::LogType, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::__set_Message(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::__get_Message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog::_ctor(UnityEngine::LogType type, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type, message);
}
//  Writing Method size for method: GlobalNamespace::PackedPlayModeBuildLogs.get_RuntimeBuildLogs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> (GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PackedPlayModeBuildLogs>::get(),
                            "get_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PackedPlayModeBuildLogs.set_RuntimeBuildLogs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackedPlayModeBuildLogs::*)(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>)>(&GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PackedPlayModeBuildLogs>::get(),
                            "set_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PackedPlayModeBuildLogs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&GlobalNamespace::PackedPlayModeBuildLogs::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x287d60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PackedPlayModeBuildLogs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PackedPlayModeBuildLogs::__set_m_RuntimeBuildLogs(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> GlobalNamespace::PackedPlayModeBuildLogs::__get_m_RuntimeBuildLogs() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PackedPlayModeBuildLogs>::get(),
                            "get_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PackedPlayModeBuildLogs>::get(),
                            "set_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__PackedPlayModeBuildLogs__RuntimeBuildLog>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 GlobalNamespace::PackedPlayModeBuildLogs::PackedPlayModeBuildLogs()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PackedPlayModeBuildLogs>())) {}
 void GlobalNamespace::PackedPlayModeBuildLogs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PackedPlayModeBuildLogs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
