#pragma once
#include "GlobalNamespace/zzzz__BloomFilterUtil_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__BloomFilterUtil_def.hpp"
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomFilterUtil.MurmurHash2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&GlobalNamespace::BloomFilterUtil::MurmurHash2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1214e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFilterUtil>::get(),
                            "MurmurHash2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 uint32_t GlobalNamespace::BloomFilterUtil::MurmurHash2(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFilterUtil>::get(),
                            "MurmurHash2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, key);
}
/// @param hashCount: int32_t (default: 3)
/// @param hashBits: int32_t (default: 8)
template<typename T>
 T GlobalNamespace::BloomFilterUtil::ToBloomFilter(::StringW value, int32_t hashCount, int32_t hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFilterUtil>::get(),
                        "ToBloomFilter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, value, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: 3)
/// @param hashBits: int32_t (default: 8)
template<typename T>
 T GlobalNamespace::BloomFilterUtil::ToBloomFilter(System::Collections::Generic::IEnumerable_1<::StringW> strings, int32_t hashCount, int32_t hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFilterUtil>::get(),
                        "ToBloomFilter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, strings, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: 3)
/// @param hashBits: int32_t (default: 8)
template<typename T>
 T GlobalNamespace::BloomFilterUtil::AddBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFilterUtil>::get(),
                        "AddBloomFilterEntry",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bitMask, value, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: 3)
/// @param hashBits: int32_t (default: 8)
template<typename T>
 bool GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFilterUtil>::get(),
                        "ContainsBloomFilterEntry",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bitMask, value, hashCount, hashBits);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::*)()>(&GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>._ToBloomFilter_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BitMask128 (GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::*)(GlobalNamespace::BitMask128, ::StringW)>(&GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::_ToBloomFilter_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BitMask128>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::__set_hashCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::__set_hashBits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128> GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::New_ctor()  {
GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BitMask128 GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>::_ToBloomFilter_b__0(GlobalNamespace::BitMask128 bloomFilter, ::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<GlobalNamespace::BitMask128>>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BitMask128>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BitMask128, false>(const_cast<void*>(instance), ___internal_method, bloomFilter, str);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::__set_hashCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::__set_hashBits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T> GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>::_ToBloomFilter_b__0(T bloomFilter, ::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, bloomFilter, str);
}
