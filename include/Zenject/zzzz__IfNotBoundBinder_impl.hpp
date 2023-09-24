#pragma once
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: Zenject::IfNotBoundBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IfNotBoundBinder::*)(Zenject::BindInfo)>(&Zenject::IfNotBoundBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d61ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IfNotBoundBinder.get_BindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindInfo (Zenject::IfNotBoundBinder::*)()>(&Zenject::IfNotBoundBinder::get_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d61ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            "get_BindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IfNotBoundBinder.set_BindInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IfNotBoundBinder::*)(Zenject::BindInfo)>(&Zenject::IfNotBoundBinder::set_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d61cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            "set_BindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IfNotBoundBinder.IfNotBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IfNotBoundBinder::*)()>(&Zenject::IfNotBoundBinder::IfNotBound)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d61cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            "IfNotBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::IfNotBoundBinder::__set__BindInfo_k__BackingField(Zenject::BindInfo value)  {
::cordl_internals::setInstanceField<Zenject::BindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindInfo>(value));
}
constexpr Zenject::BindInfo Zenject::IfNotBoundBinder::__get__BindInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<Zenject::BindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::IfNotBoundBinder Zenject::IfNotBoundBinder::New_ctor(Zenject::BindInfo bindInfo)  {
Zenject::IfNotBoundBinder o{THROW_UNLESS(::il2cpp_utils::New<Zenject::IfNotBoundBinder>(bindInfo))};
return o;
}
 void Zenject::IfNotBoundBinder::_ctor(Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo);
}
 Zenject::BindInfo Zenject::IfNotBoundBinder::get_BindInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            "get_BindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::BindInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::IfNotBoundBinder::set_BindInfo(Zenject::BindInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            "set_BindInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Zenject::IfNotBoundBinder::IfNotBound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IfNotBoundBinder>::get(),
                            "IfNotBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
