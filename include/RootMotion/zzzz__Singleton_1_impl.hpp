#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__Singleton_1_def.hpp"
//  Writing Method size for method: RootMotion::Singleton_1.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (*)()>(&RootMotion::Singleton_1::get_instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::Singleton_1.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Singleton_1::*)()>(&RootMotion::Singleton_1::Awake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::Singleton_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::Singleton_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Singleton_1::*)()>(&RootMotion::Singleton_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void RootMotion::Singleton_1::__set_sInstance(T value)  {
::cordl_internals::setStaticField<T, "sInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get>(std::forward<T>(value));
}
 T RootMotion::Singleton_1::__get_sInstance()  {
return ::cordl_internals::getStaticField<T, "sInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get>();
}
 T RootMotion::Singleton_1::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 void RootMotion::Singleton_1::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::Singleton_1::Singleton_1()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<Singleton_1>())) {}
 void RootMotion::Singleton_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::Singleton_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
