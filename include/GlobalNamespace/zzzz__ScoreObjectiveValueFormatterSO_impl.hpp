#pragma once
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ScoreObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO.FormatValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)(int32_t)>(&::GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f12c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ScoreObjectiveValueFormatterSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)()>(&::GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO>::get(),
                            "FormatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::GlobalNamespace::ScoreObjectiveValueFormatterSO::ScoreObjectiveValueFormatterSO()  : ::GlobalNamespace::ObjectiveValueFormatterSO(THROW_UNLESS(::il2cpp_utils::New<ScoreObjectiveValueFormatterSO>())) {}
 void ::GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
