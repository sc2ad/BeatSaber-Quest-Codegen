#pragma once
#include "Tweening/zzzz__TweeningManager_impl.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: Tweening::SongTimeTweeningManager.GetTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (Tweening::SongTimeTweeningManager::*)()>(&Tweening::SongTimeTweeningManager::GetTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21d5600;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Tweening::SongTimeTweeningManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::SongTimeTweeningManager>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::SongTimeTweeningManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::SongTimeTweeningManager::*)()>(&Tweening::SongTimeTweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d56a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::SongTimeTweeningManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Tweening::SongTimeTweeningManager::__set__audioTimeSource(GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAudioTimeSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAudioTimeSource>(value));
}
constexpr GlobalNamespace::IAudioTimeSource Tweening::SongTimeTweeningManager::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAudioTimeSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t Tweening::SongTimeTweeningManager::GetTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::SongTimeTweeningManager>::get(),
                            "GetTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Tweening::SongTimeTweeningManager Tweening::SongTimeTweeningManager::New_ctor()  {
Tweening::SongTimeTweeningManager o{THROW_UNLESS(::il2cpp_utils::New<Tweening::SongTimeTweeningManager>())};
return o;
}
 void Tweening::SongTimeTweeningManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::SongTimeTweeningManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
