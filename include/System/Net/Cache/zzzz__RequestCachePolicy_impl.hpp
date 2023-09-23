#pragma once
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
//  Writing Method size for method: System::Net::Cache::RequestCachePolicy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cache::RequestCachePolicy::*)(System::Net::Cache::RequestCacheLevel)>(&System::Net::Cache::RequestCachePolicy::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x285ec94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachePolicy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Cache::RequestCacheLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Cache::RequestCachePolicy.get_Level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Cache::RequestCacheLevel (System::Net::Cache::RequestCachePolicy::*)()>(&System::Net::Cache::RequestCachePolicy::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285eda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachePolicy>::get(),
                            "get_Level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Cache::RequestCachePolicy.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Cache::RequestCachePolicy::*)()>(&System::Net::Cache::RequestCachePolicy::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x285edac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Cache::RequestCachePolicy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachePolicy>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::Cache::RequestCachePolicy::__set_m_Level(System::Net::Cache::RequestCacheLevel value)  {
::cordl_internals::setInstanceField<System::Net::Cache::RequestCacheLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Cache::RequestCacheLevel>(value));
}
constexpr System::Net::Cache::RequestCacheLevel System::Net::Cache::RequestCachePolicy::__get_m_Level() const {
return ::cordl_internals::getInstanceField<System::Net::Cache::RequestCacheLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "level", ty: "System::Net::Cache::RequestCacheLevel", modifiers: "", def_value: None }]
 System::Net::Cache::RequestCachePolicy::RequestCachePolicy(System::Net::Cache::RequestCacheLevel level)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RequestCachePolicy>(level))) {}
 void System::Net::Cache::RequestCachePolicy::_ctor(System::Net::Cache::RequestCacheLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachePolicy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Cache::RequestCacheLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level);
}
 System::Net::Cache::RequestCacheLevel System::Net::Cache::RequestCachePolicy::get_Level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachePolicy>::get(),
                            "get_Level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Cache::RequestCacheLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::Cache::RequestCachePolicy::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCachePolicy>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
