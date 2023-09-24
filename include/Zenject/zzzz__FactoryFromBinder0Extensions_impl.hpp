#pragma once
#include "Zenject/zzzz__FactoryFromBinder0Extensions_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder0Extensions_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template<typename TContract,typename TMemoryPool>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromMonoPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> poolBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromMonoPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, poolBindGenerator);
}
template<typename TContract,typename TMemoryPool>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract> fromBinder)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromPoolableMemoryPool",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder);
}
template<typename TContract>
 Zenject::ArgConditionCopyNonLazyBinder Zenject::FactoryFromBinder0Extensions::FromIFactory(Zenject::FactoryFromBinder_1<TContract> fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> factoryBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryFromBinder0Extensions>::get(),
                        "FromIFactory",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::FactoryFromBinder_1<TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ArgConditionCopyNonLazyBinder, false>(nullptr, ___internal_method, fromBinder, factoryBindGenerator);
}
constexpr void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::__set_poolId(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::__get_poolId() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool> Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::New_ctor()  {
Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>>())};
return o;
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::_FromPoolableMemoryPool_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>>::get(),
                            "<FromPoolableMemoryPool>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass0_0_2<TContract,TMemoryPool>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::__set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get>(std::forward<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>(value));
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get>();
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::__set___9__1_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get>(std::forward<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>(value));
}
 System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get>();
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::New_ctor()  {
Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>())};
return o;
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::_FromPoolableMemoryPool_b__1_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get(),
                            "<FromPoolableMemoryPool>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__1_1<TContract>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::__set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get>(std::forward<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>(value));
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get>();
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::__set___9__3_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get>(std::forward<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>(value));
}
 System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::__get___9__3_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get>();
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::New_ctor()  {
Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>())};
return o;
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::_FromMonoPoolableMemoryPool_b__3_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get(),
                            "<FromMonoPoolableMemoryPool>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__3_1<TContract>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::__set___9(Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get>(std::forward<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>(value));
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get>();
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::__set___9__5_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get>(std::forward<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>>(value));
}
 System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>> Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::__get___9__5_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get>();
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::New_ctor()  {
Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>())};
return o;
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::_FromPoolableMemoryPool_b__5_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get(),
                            "<FromPoolableMemoryPool>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__5_2<TContract,TMemoryPool>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
constexpr void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::__set_factoryId(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::__get_factoryId() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract> Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::New_ctor()  {
Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>>())};
return o;
}
 void Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::_FromIFactory_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>>::get(),
                            "<FromIFactory>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FactoryFromBinder0Extensions____c__DisplayClass6_0_1<TContract>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
