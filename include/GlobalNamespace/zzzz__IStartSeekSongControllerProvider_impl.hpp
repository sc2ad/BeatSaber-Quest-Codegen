#pragma once
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
//  Writing Method size for method: GlobalNamespace::IStartSeekSongControllerProvider.get_songController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IStartSeekSongController (GlobalNamespace::IStartSeekSongControllerProvider::*)()>(&GlobalNamespace::IStartSeekSongControllerProvider::get_songController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IStartSeekSongControllerProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IStartSeekSongControllerProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::IStartSeekSongController GlobalNamespace::IStartSeekSongControllerProvider::get_songController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IStartSeekSongControllerProvider>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IStartSeekSongController, false>(const_cast<void*>(instance), ___internal_method);
}
