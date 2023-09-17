#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LocalizationProvider_def.hpp"
#include "Polyglot/zzzz__Localization_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.get_localization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Localization (::GlobalNamespace::LocalizationProvider::*)()>(&::GlobalNamespace::LocalizationProvider::get_localization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "get_localization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LocalizationProvider (*)()>(&::GlobalNamespace::LocalizationProvider::get_Instance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x266f39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.set_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::LocalizationProvider)>(&::GlobalNamespace::LocalizationProvider::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x266f518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "set_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LocalizationProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.get_HasInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::LocalizationProvider::get_HasInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x266f430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "get_HasInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalizationProvider::*)()>(&::GlobalNamespace::LocalizationProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266f564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LocalizationProvider::__set__localization(::Polyglot::Localization value)  {
::cordl_internals::setInstanceField<::Polyglot::Localization, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Polyglot::Localization>(value));
}
constexpr ::Polyglot::Localization ::GlobalNamespace::LocalizationProvider::__get__localization() const {
return ::cordl_internals::getInstanceField<::Polyglot::Localization, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LocalizationProvider::__set__instance(::GlobalNamespace::LocalizationProvider value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LocalizationProvider, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get>(std::forward<::GlobalNamespace::LocalizationProvider>(value));
}
 ::GlobalNamespace::LocalizationProvider ::GlobalNamespace::LocalizationProvider::__get__instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LocalizationProvider, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get>();
}
 ::Polyglot::Localization ::GlobalNamespace::LocalizationProvider::get_localization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "get_localization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Polyglot::Localization, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::LocalizationProvider ::GlobalNamespace::LocalizationProvider::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalizationProvider, false>(nullptr, ___internal_method);
}
 void ::GlobalNamespace::LocalizationProvider::set_Instance(::GlobalNamespace::LocalizationProvider value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "set_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LocalizationProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::GlobalNamespace::LocalizationProvider::get_HasInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            "get_HasInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::LocalizationProvider::LocalizationProvider()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<LocalizationProvider>())) {}
 void ::GlobalNamespace::LocalizationProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
