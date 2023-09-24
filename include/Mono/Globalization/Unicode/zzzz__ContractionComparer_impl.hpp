#pragma once
#include "Mono/Globalization/Unicode/zzzz__ContractionComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
//  Writing Method size for method: Mono::Globalization::Unicode::ContractionComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Globalization::Unicode::ContractionComparer::*)(Mono::Globalization::Unicode::Contraction, Mono::Globalization::Unicode::Contraction)>(&Mono::Globalization::Unicode::ContractionComparer::Compare)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22a7f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::ContractionComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Contraction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Contraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Globalization::Unicode::ContractionComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::ContractionComparer::*)()>(&Mono::Globalization::Unicode::ContractionComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a8030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::ContractionComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction>
constexpr  Mono::Globalization::Unicode::ContractionComparer::operator System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction>() const noexcept {
return System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction>(::bs_hook::Il2CppWrapperType::instance);
}
 void Mono::Globalization::Unicode::ContractionComparer::__set_Instance(Mono::Globalization::Unicode::ContractionComparer value)  {
::cordl_internals::setStaticField<Mono::Globalization::Unicode::ContractionComparer, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::ContractionComparer>::get>(std::forward<Mono::Globalization::Unicode::ContractionComparer>(value));
}
 Mono::Globalization::Unicode::ContractionComparer Mono::Globalization::Unicode::ContractionComparer::__get_Instance()  {
return ::cordl_internals::getStaticField<Mono::Globalization::Unicode::ContractionComparer, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::ContractionComparer>::get>();
}
 int32_t Mono::Globalization::Unicode::ContractionComparer::Compare(Mono::Globalization::Unicode::Contraction c1, Mono::Globalization::Unicode::Contraction c2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::ContractionComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Contraction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Globalization::Unicode::Contraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, c1, c2);
}
 Mono::Globalization::Unicode::ContractionComparer Mono::Globalization::Unicode::ContractionComparer::New_ctor()  {
Mono::Globalization::Unicode::ContractionComparer o{THROW_UNLESS(::il2cpp_utils::New<Mono::Globalization::Unicode::ContractionComparer>())};
return o;
}
 void Mono::Globalization::Unicode::ContractionComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::ContractionComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
