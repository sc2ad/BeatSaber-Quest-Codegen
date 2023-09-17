#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "Notepad/zzzz__NoteSO_def.hpp"
#include "Notepad/zzzz__NoteURL_def.hpp"
//  Writing Method size for method: ::Notepad::NoteSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Notepad::NoteSO::*)()>(&::Notepad::NoteSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2551ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NoteSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Notepad::NoteSO::__set_title(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Notepad::NoteSO::__get_title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Notepad::NoteSO::__set_content(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Notepad::NoteSO::__get_content() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Notepad::NoteSO::__set_urls(::ArrayW<::Notepad::NoteURL> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Notepad::NoteURL>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Notepad::NoteURL>>(value));
}
constexpr ::ArrayW<::Notepad::NoteURL> ::Notepad::NoteSO::__get_urls() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Notepad::NoteURL>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Notepad::NoteSO::NoteSO()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<NoteSO>())) {}
 void ::Notepad::NoteSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NoteSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
