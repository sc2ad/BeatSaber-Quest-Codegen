#pragma once
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DistanceObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DistanceObjectiveValueFormatterSO.FormatValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::DistanceObjectiveValueFormatterSO::*)(int32_t)>(&::GlobalNamespace::DistanceObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21f0d70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::DistanceObjectiveValueFormatterSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DistanceObjectiveValueFormatterSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DistanceObjectiveValueFormatterSO::*)()>(&::GlobalNamespace::DistanceObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f0df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::GlobalNamespace::DistanceObjectiveValueFormatterSO::FormatValue(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO>::get(),
                            "FormatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::GlobalNamespace::DistanceObjectiveValueFormatterSO::DistanceObjectiveValueFormatterSO()  : ::GlobalNamespace::ObjectiveValueFormatterSO(THROW_UNLESS(::il2cpp_utils::New<DistanceObjectiveValueFormatterSO>())) {}
 void ::GlobalNamespace::DistanceObjectiveValueFormatterSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
