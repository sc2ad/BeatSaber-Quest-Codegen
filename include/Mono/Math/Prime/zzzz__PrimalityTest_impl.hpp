#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Math/Prime/zzzz__PrimalityTest_def.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Mono::Math::Prime::PrimalityTest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::Prime::PrimalityTest::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Math::Prime::PrimalityTest::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x22bdcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Prime::PrimalityTest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::Prime::PrimalityTest::*)(Mono::Math::BigInteger, Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bddf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Math::Prime::PrimalityTest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Mono::Math::Prime::PrimalityTest::PrimalityTest(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<PrimalityTest>(object, method))) {}
 void Mono::Math::Prime::PrimalityTest::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool Mono::Math::Prime::PrimalityTest::Invoke(Mono::Math::BigInteger bi, Mono::Math::Prime::ConfidenceFactor confidence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Prime::ConfidenceFactor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bi, confidence);
}
