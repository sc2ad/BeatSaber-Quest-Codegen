#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::____GlobalNamespace__RankModel__Rank(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::E{0};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::D{1};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::C{2};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::B{3};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::A{4};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::S{5};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::SS{6};
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank  ::GlobalNamespace::____GlobalNamespace__RankModel__Rank::SSS{7};
//  Writing Method size for method: ::GlobalNamespace::RankModel.GetRankName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::____GlobalNamespace__RankModel__Rank)>(&::GlobalNamespace::RankModel::GetRankName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1219530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel>::get(),
                            "GetRankName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__RankModel__Rank>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankModel.GetRankForScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__RankModel__Rank (*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::RankModel::GetRankForScore)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x12195ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel>::get(),
                            "GetRankForScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::GlobalNamespace::RankModel::GetRankName(::GlobalNamespace::____GlobalNamespace__RankModel__Rank rank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel>::get(),
                            "GetRankName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__RankModel__Rank>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, rank);
}
 ::GlobalNamespace::____GlobalNamespace__RankModel__Rank ::GlobalNamespace::RankModel::GetRankForScore(int32_t multipliedScore, int32_t modifiedScore, int32_t maxMultipliedScore, int32_t maxModifiedScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RankModel>::get(),
                            "GetRankForScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__RankModel__Rank, false>(nullptr, ___internal_method, multipliedScore, modifiedScore, maxMultipliedScore, maxModifiedScore);
}
} // end anonymous namespace
