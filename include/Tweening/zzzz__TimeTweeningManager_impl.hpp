#pragma once
#include "Tweening/zzzz__TweeningManager_impl.hpp"
namespace {
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::Tweening::TimeTweeningManager.GetTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tweening::TimeTweeningManager::*)()>(&::Tweening::TimeTweeningManager::GetTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287a824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Tweening::TimeTweeningManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TimeTweeningManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::TimeTweeningManager::*)()>(&::Tweening::TimeTweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x287a82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 float_t ::Tweening::TimeTweeningManager::GetTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager>::get(),
                            "GetTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::Tweening::TimeTweeningManager::TimeTweeningManager()  : ::Tweening::TweeningManager(THROW_UNLESS(::il2cpp_utils::New<TimeTweeningManager>())) {}
 void ::Tweening::TimeTweeningManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
