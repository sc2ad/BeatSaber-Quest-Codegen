#pragma once
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
namespace {
#include "Zenject/zzzz__ListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DisposeBlock_def.hpp"
//  Writing Method size for method: ::Zenject::ListPool_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ListPool_1::*)()>(&::Zenject::ListPool_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ListPool_1.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ListPool_1<T> (*)()>(&::Zenject::ListPool_1::get_Instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ListPool_1.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ListPool_1::*)(::System::Collections::Generic::List_1<T>)>(&::Zenject::ListPool_1::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::ListPool_1::__set__instance(::Zenject::ListPool_1<T> value)  {
::cordl_internals::setStaticField<::Zenject::ListPool_1<T>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get>(std::forward<::Zenject::ListPool_1<T>>(value));
}
 ::Zenject::ListPool_1<T> ::Zenject::ListPool_1::__get__instance()  {
return ::cordl_internals::getStaticField<::Zenject::ListPool_1<T>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get>();
}
// Ctor Parameters []
 ::Zenject::ListPool_1::ListPool_1()  : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<T>>(THROW_UNLESS(::il2cpp_utils::New<ListPool_1>())) {}
 void ::Zenject::ListPool_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::ListPool_1<T> ::Zenject::ListPool_1::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ListPool_1<T>, false>(nullptr, ___internal_method);
}
 void ::Zenject::ListPool_1::OnDespawned(::System::Collections::Generic::List_1<T> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list);
}
//  Writing Method size for method: ::Zenject::ListPool_1<::Zenject::TypeValuePair>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ListPool_1<::Zenject::TypeValuePair>::*)()>(&::Zenject::ListPool_1<::Zenject::TypeValuePair>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ListPool_1<::Zenject::TypeValuePair>.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ListPool_1<::Zenject::TypeValuePair> (*)()>(&::Zenject::ListPool_1<::Zenject::TypeValuePair>::get_Instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ListPool_1<::Zenject::TypeValuePair>.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ListPool_1<::Zenject::TypeValuePair>::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>)>(&::Zenject::ListPool_1<::Zenject::TypeValuePair>::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::ListPool_1<::Zenject::TypeValuePair>::__set__instance(::Zenject::ListPool_1<::Zenject::TypeValuePair> value)  {
::cordl_internals::setStaticField<::Zenject::ListPool_1<::Zenject::TypeValuePair>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get>(std::forward<::Zenject::ListPool_1<::Zenject::TypeValuePair>>(value));
}
 ::Zenject::ListPool_1<::Zenject::TypeValuePair> ::Zenject::ListPool_1<::Zenject::TypeValuePair>::__get__instance()  {
return ::cordl_internals::getStaticField<::Zenject::ListPool_1<::Zenject::TypeValuePair>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get>();
}
// Ctor Parameters []
 ::Zenject::ListPool_1<::Zenject::TypeValuePair>::ListPool_1()  : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>(THROW_UNLESS(::il2cpp_utils::New<ListPool_1>())) {}
 void ::Zenject::ListPool_1<::Zenject::TypeValuePair>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::ListPool_1<::Zenject::TypeValuePair> ::Zenject::ListPool_1<::Zenject::TypeValuePair>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ListPool_1<::Zenject::TypeValuePair>, false>(nullptr, ___internal_method);
}
 void ::Zenject::ListPool_1<::Zenject::TypeValuePair>::OnDespawned(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::TypeValuePair>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list);
}
//  Writing Method size for method: ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::*)()>(&::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> (*)()>(&::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::get_Instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::*)(::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>)>(&::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::__set__instance(::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> value)  {
::cordl_internals::setStaticField<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get>(std::forward<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>(value));
}
 ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::__get__instance()  {
return ::cordl_internals::getStaticField<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get>();
}
// Ctor Parameters []
 ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::ListPool_1()  : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>(THROW_UNLESS(::il2cpp_utils::New<ListPool_1>())) {}
 void ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>, false>(nullptr, ___internal_method);
}
 void ::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>::OnDespawned(::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ListPool_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposeBlock__SpawnedObjectPoolPair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list);
}
} // end anonymous namespace
