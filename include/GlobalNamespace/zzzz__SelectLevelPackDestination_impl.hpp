#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelPackDestination_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: GlobalNamespace::SelectLevelPackDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelPackDestination::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::SelectLevelPackDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21bc5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelPackDestination>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectLevelPackDestination::__set_beatmapLevelPack(GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPack, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPack GlobalNamespace::SelectLevelPackDestination::__get_beatmapLevelPack() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPack, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::SelectLevelPackDestination GlobalNamespace::SelectLevelPackDestination::New_ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack)  {
GlobalNamespace::SelectLevelPackDestination o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SelectLevelPackDestination>(beatmapLevelPack))};
return o;
}
 void GlobalNamespace::SelectLevelPackDestination::_ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelPackDestination>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelPack);
}
