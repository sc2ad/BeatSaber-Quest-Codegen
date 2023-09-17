#pragma once
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
namespace {
#include "Zenject/zzzz__HashSetPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Zenject::HashSetPool_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::HashSetPool_1::*)()>(&::Zenject::HashSetPool_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::HashSetPool_1.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::HashSetPool_1<T> (*)()>(&::Zenject::HashSetPool_1::get_Instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::HashSetPool_1.OnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::HashSet_1<T>)>(&::Zenject::HashSetPool_1::OnSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::HashSetPool_1.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::HashSet_1<T>)>(&::Zenject::HashSetPool_1::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::HashSetPool_1::__set__instance(::Zenject::HashSetPool_1<T> value)  {
::cordl_internals::setStaticField<::Zenject::HashSetPool_1<T>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get>(std::forward<::Zenject::HashSetPool_1<T>>(value));
}
 ::Zenject::HashSetPool_1<T> ::Zenject::HashSetPool_1::__get__instance()  {
return ::cordl_internals::getStaticField<::Zenject::HashSetPool_1<T>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get>();
}
// Ctor Parameters []
 ::Zenject::HashSetPool_1::HashSetPool_1()  : ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::HashSet_1<T>>(THROW_UNLESS(::il2cpp_utils::New<HashSetPool_1>())) {}
 void ::Zenject::HashSetPool_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::HashSetPool_1<T> ::Zenject::HashSetPool_1::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::HashSetPool_1<T>, false>(nullptr, ___internal_method);
}
 void ::Zenject::HashSetPool_1::OnSpawned(::System::Collections::Generic::HashSet_1<T> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
 void ::Zenject::HashSetPool_1::OnDespawned(::System::Collections::Generic::HashSet_1<T> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::HashSetPool_1>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
} // end anonymous namespace
