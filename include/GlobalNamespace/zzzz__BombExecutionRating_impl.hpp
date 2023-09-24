#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating::GlobalNamespace__BombExecutionRating__Rating(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating  GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating::OK{0};
constexpr GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating  GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating::NotGood{1};
//  Writing Method size for method: GlobalNamespace::BombExecutionRating.get_rating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating (GlobalNamespace::BombExecutionRating::*)()>(&GlobalNamespace::BombExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExecutionRating>::get(),
                            "get_rating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BombExecutionRating._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombExecutionRating::*)(float_t, GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating)>(&GlobalNamespace::BombExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21bb568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExecutionRating>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BombExecutionRating::__set__rating_k__BackingField(GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating GlobalNamespace::BombExecutionRating::__get__rating_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating GlobalNamespace::BombExecutionRating::get_rating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExecutionRating>::get(),
                            "get_rating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BombExecutionRating GlobalNamespace::BombExecutionRating::New_ctor(float_t time, GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating rating)  {
GlobalNamespace::BombExecutionRating o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BombExecutionRating>(time, rating))};
return o;
}
 void GlobalNamespace::BombExecutionRating::_ctor(float_t time, GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating rating)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExecutionRating>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BombExecutionRating__Rating>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, rating);
}
