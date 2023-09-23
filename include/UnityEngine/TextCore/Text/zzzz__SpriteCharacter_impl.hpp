#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextElement_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteCharacter_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::SpriteCharacter.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::SpriteCharacter::*)()>(&UnityEngine::TextCore::Text::SpriteCharacter::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd2638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::SpriteCharacter>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::SpriteCharacter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::SpriteCharacter::*)()>(&UnityEngine::TextCore::Text::SpriteCharacter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bd2640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::SpriteCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextCore::Text::SpriteCharacter::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::TextCore::Text::SpriteCharacter::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::SpriteCharacter::__set_m_HashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::SpriteCharacter::__get_m_HashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::TextCore::Text::SpriteCharacter::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::SpriteCharacter>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::TextCore::Text::SpriteCharacter::SpriteCharacter()  : UnityEngine::TextCore::Text::TextElement(THROW_UNLESS(::il2cpp_utils::New<SpriteCharacter>())) {}
 void UnityEngine::TextCore::Text::SpriteCharacter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::SpriteCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
