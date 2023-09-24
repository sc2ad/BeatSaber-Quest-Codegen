#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameCache_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::NameCache.GetCachedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::Formatters::Binary::NameCache::*)(::StringW)>(&System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2362e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get(),
                            "GetCachedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::NameCache.SetCachedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::NameCache::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23632f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get(),
                            "SetCachedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::NameCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::NameCache::*)()>(&System::Runtime::Serialization::Formatters::Binary::NameCache::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235f388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::Formatters::Binary::NameCache::__set_ht(System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "ht", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get>(std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
 System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> System::Runtime::Serialization::Formatters::Binary::NameCache::__get_ht()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "ht", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get>();
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameCache::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Serialization::Formatters::Binary::NameCache::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get(),
                            "GetCachedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get(),
                            "SetCachedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Runtime::Serialization::Formatters::Binary::NameCache System::Runtime::Serialization::Formatters::Binary::NameCache::New_ctor()  {
System::Runtime::Serialization::Formatters::Binary::NameCache o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::NameCache>())};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::NameCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::NameCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
