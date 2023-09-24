#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetApplicationVersionText_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: GlobalNamespace::SetApplicationVersionText.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetApplicationVersionText::*)()>(&GlobalNamespace::SetApplicationVersionText::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20cd8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetApplicationVersionText>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SetApplicationVersionText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetApplicationVersionText::*)()>(&GlobalNamespace::SetApplicationVersionText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20cd930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetApplicationVersionText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SetApplicationVersionText::__set__versionText(TMPro::TextMeshPro value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshPro, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshPro>(value));
}
constexpr TMPro::TextMeshPro GlobalNamespace::SetApplicationVersionText::__get__versionText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshPro, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SetApplicationVersionText::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetApplicationVersionText>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SetApplicationVersionText GlobalNamespace::SetApplicationVersionText::New_ctor()  {
GlobalNamespace::SetApplicationVersionText o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SetApplicationVersionText>())};
return o;
}
 void GlobalNamespace::SetApplicationVersionText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetApplicationVersionText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
