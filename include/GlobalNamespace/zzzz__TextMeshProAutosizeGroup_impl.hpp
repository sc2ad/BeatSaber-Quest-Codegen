#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TextMeshProAutosizeGroup_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::Start)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1fa33d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa34dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TextMeshProAutosizeGroup::__set__texts(::ArrayW<::TMPro::TMP_Text> value)  {
::cordl_internals::setInstanceField<::ArrayW<::TMPro::TMP_Text>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::TMPro::TMP_Text>>(value));
}
constexpr ::ArrayW<::TMPro::TMP_Text> ::GlobalNamespace::TextMeshProAutosizeGroup::__get__texts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TMP_Text>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::TextMeshProAutosizeGroup::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TextMeshProAutosizeGroup::TextMeshProAutosizeGroup()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TextMeshProAutosizeGroup>())) {}
 void ::GlobalNamespace::TextMeshProAutosizeGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProAutosizeGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
