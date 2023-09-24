#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Polyglot/zzzz__SaveLanguagePreference_def.hpp"
#include "Polyglot/zzzz__ILocalize_def.hpp"
//  Writing Method size for method: Polyglot::SaveLanguagePreference.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::SaveLanguagePreference::*)()>(&Polyglot::SaveLanguagePreference::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2674bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::SaveLanguagePreference>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Polyglot::SaveLanguagePreference.OnLocalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::SaveLanguagePreference::*)()>(&Polyglot::SaveLanguagePreference::OnLocalize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2674c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::SaveLanguagePreference>::get(),
                            "OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Polyglot::SaveLanguagePreference._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::SaveLanguagePreference::*)()>(&Polyglot::SaveLanguagePreference::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2674c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::SaveLanguagePreference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Polyglot::ILocalize
constexpr  Polyglot::SaveLanguagePreference::operator Polyglot::ILocalize() const noexcept {
return Polyglot::ILocalize(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Polyglot::SaveLanguagePreference::__set_preferenceKey(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Polyglot::SaveLanguagePreference::__get_preferenceKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Polyglot::SaveLanguagePreference::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::SaveLanguagePreference>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::SaveLanguagePreference::OnLocalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::SaveLanguagePreference>::get(),
                            "OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Polyglot::SaveLanguagePreference Polyglot::SaveLanguagePreference::New_ctor()  {
Polyglot::SaveLanguagePreference o{THROW_UNLESS(::il2cpp_utils::New<Polyglot::SaveLanguagePreference>())};
return o;
}
 void Polyglot::SaveLanguagePreference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::SaveLanguagePreference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
