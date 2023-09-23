#pragma once
#include "System/Security/Util/zzzz__TokenizerStringBlock_def.hpp"
//  Writing Method size for method: System::Security::Util::TokenizerStringBlock._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Util::TokenizerStringBlock::*)()>(&System::Security::Util::TokenizerStringBlock::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22ea318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::TokenizerStringBlock>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::TokenizerStringBlock::__set_m_block(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Security::Util::TokenizerStringBlock::__get_m_block() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Util::TokenizerStringBlock::__set_m_next(System::Security::Util::TokenizerStringBlock value)  {
::cordl_internals::setInstanceField<System::Security::Util::TokenizerStringBlock, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Util::TokenizerStringBlock>(value));
}
constexpr System::Security::Util::TokenizerStringBlock System::Security::Util::TokenizerStringBlock::__get_m_next() const {
return ::cordl_internals::getInstanceField<System::Security::Util::TokenizerStringBlock, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Security::Util::TokenizerStringBlock::TokenizerStringBlock()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TokenizerStringBlock>())) {}
 void System::Security::Util::TokenizerStringBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Util::TokenizerStringBlock>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
