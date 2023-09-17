#pragma once
#include "Zenject/ActionInstaller.hpp"
#include "Zenject/AddToCurrentGameObjectComponentProvider.hpp"
#include "Zenject/AddToExistingGameObjectComponentProvider.hpp"
#include "Zenject/AddToExistingGameObjectComponentProviderGetter.hpp"
#include "Zenject/AddToGameObjectComponentProviderBase.hpp"
#include "Zenject/AddToNewGameObjectComponentProvider.hpp"
#include "Zenject/AnimatorIkHandlerManager.hpp"
#include "Zenject/AnimatorInstaller.hpp"
#include "Zenject/AnimatorMoveHandlerManager.hpp"
#include "Zenject/ArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/ArrayPool_1.hpp"
#include "Zenject/BindInfo.hpp"
#include "Zenject/BindSignalFromBinder_2.hpp"
#include "Zenject/BindSignalIdToBinder_1.hpp"
#include "Zenject/BindSignalToBinder_1.hpp"
#include "Zenject/BindStatement.hpp"
#include "Zenject/BindingCondition.hpp"
#include "Zenject/BindingId.hpp"
#include "Zenject/BindingInheritanceMethods.hpp"
#include "Zenject/BindingUtil.hpp"
#include "Zenject/CachedOpenTypeProvider.hpp"
#include "Zenject/CachedProvider.hpp"
#include "Zenject/ConcreteBinderGeneric_1.hpp"
#include "Zenject/ConcreteBinderNonGeneric.hpp"
#include "Zenject/ConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/ConcreteIdBinderGeneric_1.hpp"
#include "Zenject/ConcreteIdBinderNonGeneric.hpp"
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "Zenject/Context.hpp"
#include "Zenject/ConventionAssemblySelectionBinder.hpp"
#include "Zenject/ConventionBindInfo.hpp"
#include "Zenject/ConventionFilterTypesBinder.hpp"
#include "Zenject/ConventionSelectTypesBinder.hpp"
#include "Zenject/CopyNonLazyBinder.hpp"
#include "Zenject/DeclareSignalAsyncTickPriorityCopyBinder.hpp"
#include "Zenject/DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.hpp"
#include "Zenject/DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.hpp"
#include "Zenject/DecoratorToChoiceFromBinder_1.hpp"
#include "Zenject/DefaultGameObjectKernel.hpp"
#include "Zenject/DefaultGameObjectParentInstaller.hpp"
#include "Zenject/DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/DiContainer.hpp"
#include "Zenject/DictionaryPool_2.hpp"
#include "Zenject/DisposableManager.hpp"
#include "Zenject/DisposeBlock.hpp"
#include "Zenject/EmptyGameObjectProvider.hpp"
#include "Zenject/ExecutionOrderInstaller.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_1.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_11.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_2.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_3.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_4.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_5.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_6.hpp"
#include "Zenject/FactoryArgumentsToChoiceBinder_7.hpp"
#include "Zenject/FactoryBindInfo.hpp"
#include "Zenject/FactoryFromBinder0Extensions.hpp"
#include "Zenject/FactoryFromBinder1Extensions.hpp"
#include "Zenject/FactoryFromBinder2Extensions.hpp"
#include "Zenject/FactoryFromBinder3Extensions.hpp"
#include "Zenject/FactoryFromBinder4Extensions.hpp"
#include "Zenject/FactoryFromBinder5Extensions.hpp"
#include "Zenject/FactoryFromBinder6Extensions.hpp"
#include "Zenject/FactoryFromBinderBase.hpp"
#include "Zenject/FactoryFromBinderUntyped.hpp"
#include "Zenject/FactoryFromBinder_1.hpp"
#include "Zenject/FactoryFromBinder_11.hpp"
#include "Zenject/FactoryFromBinder_2.hpp"
#include "Zenject/FactoryFromBinder_3.hpp"
#include "Zenject/FactoryFromBinder_4.hpp"
#include "Zenject/FactoryFromBinder_5.hpp"
#include "Zenject/FactoryFromBinder_6.hpp"
#include "Zenject/FactoryFromBinder_7.hpp"
#include "Zenject/FactoryProviderWrapper_1.hpp"
#include "Zenject/FactorySubContainerBinderBase_1.hpp"
#include "Zenject/FactorySubContainerBinderWithParams_1.hpp"
#include "Zenject/FactorySubContainerBinder_1.hpp"
#include "Zenject/FactorySubContainerBinder_11.hpp"
#include "Zenject/FactorySubContainerBinder_2.hpp"
#include "Zenject/FactorySubContainerBinder_3.hpp"
#include "Zenject/FactorySubContainerBinder_4.hpp"
#include "Zenject/FactorySubContainerBinder_5.hpp"
#include "Zenject/FactorySubContainerBinder_6.hpp"
#include "Zenject/FactorySubContainerBinder_7.hpp"
#include "Zenject/FactoryToChoiceBinder_1.hpp"
#include "Zenject/FactoryToChoiceBinder_11.hpp"
#include "Zenject/FactoryToChoiceBinder_2.hpp"
#include "Zenject/FactoryToChoiceBinder_3.hpp"
#include "Zenject/FactoryToChoiceBinder_4.hpp"
#include "Zenject/FactoryToChoiceBinder_5.hpp"
#include "Zenject/FactoryToChoiceBinder_6.hpp"
#include "Zenject/FactoryToChoiceBinder_7.hpp"
#include "Zenject/FactoryToChoiceIdBinder_1.hpp"
#include "Zenject/FactoryToChoiceIdBinder_11.hpp"
#include "Zenject/FactoryToChoiceIdBinder_2.hpp"
#include "Zenject/FactoryToChoiceIdBinder_3.hpp"
#include "Zenject/FactoryToChoiceIdBinder_4.hpp"
#include "Zenject/FactoryToChoiceIdBinder_5.hpp"
#include "Zenject/FactoryToChoiceIdBinder_6.hpp"
#include "Zenject/FactoryToChoiceIdBinder_7.hpp"
#include "Zenject/Factory_1.hpp"
#include "Zenject/Factory_11.hpp"
#include "Zenject/Factory_2.hpp"
#include "Zenject/Factory_3.hpp"
#include "Zenject/Factory_4.hpp"
#include "Zenject/Factory_5.hpp"
#include "Zenject/Factory_6.hpp"
#include "Zenject/Factory_7.hpp"
#include "Zenject/FixedTickablesTaskUpdater.hpp"
#include "Zenject/FromBinder.hpp"
#include "Zenject/FromBinderGeneric_1.hpp"
#include "Zenject/FromBinderNonGeneric.hpp"
#include "Zenject/GameObjectContext.hpp"
#include "Zenject/GameObjectCreationParameters.hpp"
#include "Zenject/GetFromGameObjectComponentProvider.hpp"
#include "Zenject/GetFromGameObjectGetterComponentProvider.hpp"
#include "Zenject/GetFromPrefabComponentProvider.hpp"
#include "Zenject/GetterProvider_2.hpp"
#include "Zenject/GuiRenderableManager.hpp"
#include "Zenject/GuiRenderer.hpp"
#include "Zenject/HashSetPool_1.hpp"
#include "Zenject/IAnimatorIkHandler.hpp"
#include "Zenject/IAnimatorMoveHandler.hpp"
#include "Zenject/IBindingFinalizer.hpp"
#include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "Zenject/IFactory.hpp"
#include "Zenject/IFactoryProviderBase_1.hpp"
#include "Zenject/IFactoryProvider_1.hpp"
#include "Zenject/IFactoryProvider_11.hpp"
#include "Zenject/IFactoryProvider_2.hpp"
#include "Zenject/IFactoryProvider_3.hpp"
#include "Zenject/IFactoryProvider_4.hpp"
#include "Zenject/IFactoryProvider_5.hpp"
#include "Zenject/IFactoryProvider_6.hpp"
#include "Zenject/IFactoryProvider_7.hpp"
#include "Zenject/IFactory_1.hpp"
#include "Zenject/IFactory_10.hpp"
#include "Zenject/IFactory_11.hpp"
#include "Zenject/IFactory_2.hpp"
#include "Zenject/IFactory_3.hpp"
#include "Zenject/IFactory_4.hpp"
#include "Zenject/IFactory_5.hpp"
#include "Zenject/IFactory_6.hpp"
#include "Zenject/IFactory_7.hpp"
#include "Zenject/IFactory_8.hpp"
#include "Zenject/IFactory_9.hpp"
#include "Zenject/IFixedTickable.hpp"
#include "Zenject/IGuiRenderable.hpp"
#include "Zenject/IInitializable.hpp"
#include "Zenject/IInstaller.hpp"
#include "Zenject/IInstantiator.hpp"
#include "Zenject/ILateDisposable.hpp"
#include "Zenject/ILateTickable.hpp"
#include "Zenject/IMemoryPool.hpp"
#include "Zenject/IMemoryPool_1.hpp"
#include "Zenject/IMemoryPool_2.hpp"
#include "Zenject/IMemoryPool_3.hpp"
#include "Zenject/IMemoryPool_4.hpp"
#include "Zenject/IMemoryPool_5.hpp"
#include "Zenject/IMemoryPool_6.hpp"
#include "Zenject/IMemoryPool_7.hpp"
#include "Zenject/IMemoryPool_8.hpp"
#include "Zenject/IMemoryPool_9.hpp"
#include "Zenject/IPlaceholderFactory.hpp"
#include "Zenject/IPoolable.hpp"
#include "Zenject/IPoolable_1.hpp"
#include "Zenject/IPoolable_10.hpp"
#include "Zenject/IPoolable_11.hpp"
#include "Zenject/IPoolable_2.hpp"
#include "Zenject/IPoolable_3.hpp"
#include "Zenject/IPoolable_4.hpp"
#include "Zenject/IPoolable_5.hpp"
#include "Zenject/IPoolable_6.hpp"
#include "Zenject/IPoolable_7.hpp"
#include "Zenject/IPoolable_8.hpp"
#include "Zenject/IPoolable_9.hpp"
#include "Zenject/IPrefabInstantiator.hpp"
#include "Zenject/IPrefabProvider.hpp"
#include "Zenject/IProvider.hpp"
#include "Zenject/IProviderExtensions.hpp"
#include "Zenject/ISubContainerCreator.hpp"
#include "Zenject/ITickable.hpp"
#include "Zenject/IValidatable.hpp"
#include "Zenject/IdBinder.hpp"
#include "Zenject/IdScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/IfNotBoundBinder.hpp"
#include "Zenject/InitializableManager.hpp"
#include "Zenject/InjectAttribute.hpp"
#include "Zenject/InjectAttributeBase.hpp"
#include "Zenject/InjectContext.hpp"
#include "Zenject/InjectLocalAttribute.hpp"
#include "Zenject/InjectOptionalAttribute.hpp"
#include "Zenject/InjectSources.hpp"
#include "Zenject/InjectTypeInfo.hpp"
#include "Zenject/InjectUtil.hpp"
#include "Zenject/InjectableInfo.hpp"
#include "Zenject/Installer.hpp"
#include "Zenject/InstallerBase.hpp"
#include "Zenject/Installer_1.hpp"
#include "Zenject/Installer_2.hpp"
#include "Zenject/Installer_3.hpp"
#include "Zenject/Installer_4.hpp"
#include "Zenject/Installer_5.hpp"
#include "Zenject/Installer_6.hpp"
#include "Zenject/InstanceProvider.hpp"
#include "Zenject/InstantiateCallbackConditionCopyNonLazyBinder.hpp"
#include "Zenject/InstantiateOnPrefabComponentProvider.hpp"
#include "Zenject/InvalidBindResponses.hpp"
#include "Zenject/Kernel.hpp"
#include "Zenject/KeyedFactoryBase_2.hpp"
#include "Zenject/KeyedFactory_2.hpp"
#include "Zenject/KeyedFactory_3.hpp"
#include "Zenject/KeyedFactory_4.hpp"
#include "Zenject/KeyedFactory_5.hpp"
#include "Zenject/KeyedFactory_6.hpp"
#include "Zenject/LateTickablesTaskUpdater.hpp"
#include "Zenject/LazyInject_1.hpp"
#include "Zenject/LazyInstanceInjector.hpp"
#include "Zenject/ListPool_1.hpp"
#include "Zenject/LoadSceneRelationship.hpp"
#include "Zenject/MemoryPoolBase_1.hpp"
#include "Zenject/MemoryPoolBindInfo.hpp"
#include "Zenject/MemoryPoolBindingFinalizer_1.hpp"
#include "Zenject/MemoryPoolExpandBinder_1.hpp"
#include "Zenject/MemoryPoolIdInitialSizeMaxSizeBinder_1.hpp"
#include "Zenject/MemoryPoolInitialSizeMaxSizeBinder_1.hpp"
#include "Zenject/MemoryPoolMaxSizeBinder_1.hpp"
#include "Zenject/MemoryPoolSettings.hpp"
#include "Zenject/MemoryPool_1.hpp"
#include "Zenject/MemoryPool_2.hpp"
#include "Zenject/MemoryPool_3.hpp"
#include "Zenject/MemoryPool_4.hpp"
#include "Zenject/MemoryPool_5.hpp"
#include "Zenject/MemoryPool_6.hpp"
#include "Zenject/MemoryPool_7.hpp"
#include "Zenject/MemoryPool_8.hpp"
#include "Zenject/MemoryPool_9.hpp"
#include "Zenject/MethodMultipleProviderUntyped.hpp"
#include "Zenject/MethodProviderMultiple_1.hpp"
#include "Zenject/MethodProviderSimple_1.hpp"
#include "Zenject/MethodProviderUntyped.hpp"
#include "Zenject/MethodProviderWithContainer_1.hpp"
#include "Zenject/MethodProviderWithContainer_11.hpp"
#include "Zenject/MethodProviderWithContainer_2.hpp"
#include "Zenject/MethodProviderWithContainer_3.hpp"
#include "Zenject/MethodProviderWithContainer_4.hpp"
#include "Zenject/MethodProviderWithContainer_5.hpp"
#include "Zenject/MethodProviderWithContainer_6.hpp"
#include "Zenject/MethodProviderWithContainer_7.hpp"
#include "Zenject/MethodProvider_1.hpp"
#include "Zenject/MonoInstaller.hpp"
#include "Zenject/MonoInstallerBase.hpp"
#include "Zenject/MonoInstallerUtil.hpp"
#include "Zenject/MonoInstaller_1.hpp"
#include "Zenject/MonoInstaller_2.hpp"
#include "Zenject/MonoInstaller_3.hpp"
#include "Zenject/MonoInstaller_4.hpp"
#include "Zenject/MonoInstaller_5.hpp"
#include "Zenject/MonoInstaller_6.hpp"
#include "Zenject/MonoKernel.hpp"
#include "Zenject/MonoMemoryPool_1.hpp"
#include "Zenject/MonoMemoryPool_2.hpp"
#include "Zenject/MonoMemoryPool_3.hpp"
#include "Zenject/MonoMemoryPool_4.hpp"
#include "Zenject/MonoMemoryPool_5.hpp"
#include "Zenject/MonoMemoryPool_6.hpp"
#include "Zenject/MonoPoolableMemoryPool_1.hpp"
#include "Zenject/MonoPoolableMemoryPool_2.hpp"
#include "Zenject/MonoPoolableMemoryPool_3.hpp"
#include "Zenject/MonoPoolableMemoryPool_4.hpp"
#include "Zenject/MonoPoolableMemoryPool_5.hpp"
#include "Zenject/MonoPoolableMemoryPool_6.hpp"
#include "Zenject/MonoPoolableMemoryPool_7.hpp"
#include "Zenject/MonoPoolableMemoryPool_8.hpp"
#include "Zenject/MonoPoolableMemoryPool_9.hpp"
#include "Zenject/NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/NoReflectionBakingAttribute.hpp"
#include "Zenject/NoTransitionContext.hpp"
#include "Zenject/NoTransitionInstaller.hpp"
#include "Zenject/NonLazyBinder.hpp"
#include "Zenject/NullBindingFinalizer.hpp"
#include "Zenject/PlaceholderFactoryBase_1.hpp"
#include "Zenject/PlaceholderFactoryBindingFinalizer_1.hpp"
#include "Zenject/PlaceholderFactory_1.hpp"
#include "Zenject/PlaceholderFactory_11.hpp"
#include "Zenject/PlaceholderFactory_2.hpp"
#include "Zenject/PlaceholderFactory_3.hpp"
#include "Zenject/PlaceholderFactory_4.hpp"
#include "Zenject/PlaceholderFactory_5.hpp"
#include "Zenject/PlaceholderFactory_6.hpp"
#include "Zenject/PlaceholderFactory_7.hpp"
#include "Zenject/PoolCleanupChecker.hpp"
#include "Zenject/PoolExceededFixedSizeException.hpp"
#include "Zenject/PoolExpandMethods.hpp"
#include "Zenject/PoolWrapperFactory_1.hpp"
#include "Zenject/PoolWrapperFactory_2.hpp"
#include "Zenject/PoolableManager.hpp"
#include "Zenject/PoolableMemoryPoolProviderBase_1.hpp"
#include "Zenject/PoolableMemoryPoolProvider_2.hpp"
#include "Zenject/PoolableMemoryPoolProvider_3.hpp"
#include "Zenject/PoolableMemoryPoolProvider_4.hpp"
#include "Zenject/PoolableMemoryPoolProvider_5.hpp"
#include "Zenject/PoolableMemoryPoolProvider_6.hpp"
#include "Zenject/PoolableMemoryPoolProvider_7.hpp"
#include "Zenject/PoolableMemoryPoolProvider_8.hpp"
#include "Zenject/PoolableMemoryPool_1.hpp"
#include "Zenject/PoolableMemoryPool_2.hpp"
#include "Zenject/PoolableMemoryPool_3.hpp"
#include "Zenject/PoolableMemoryPool_4.hpp"
#include "Zenject/PoolableMemoryPool_5.hpp"
#include "Zenject/PoolableMemoryPool_6.hpp"
#include "Zenject/PoolableMemoryPool_7.hpp"
#include "Zenject/PoolableMemoryPool_8.hpp"
#include "Zenject/PoolableMemoryPool_9.hpp"
#include "Zenject/PoolableStaticMemoryPool_1.hpp"
#include "Zenject/PoolableStaticMemoryPool_2.hpp"
#include "Zenject/PoolableStaticMemoryPool_3.hpp"
#include "Zenject/PoolableStaticMemoryPool_4.hpp"
#include "Zenject/PoolableStaticMemoryPool_5.hpp"
#include "Zenject/PoolableStaticMemoryPool_6.hpp"
#include "Zenject/PoolableStaticMemoryPool_7.hpp"
#include "Zenject/PoolableStaticMemoryPool_8.hpp"
#include "Zenject/PrefabBindingFinalizer.hpp"
#include "Zenject/PrefabFactory_1.hpp"
#include "Zenject/PrefabFactory_2.hpp"
#include "Zenject/PrefabFactory_3.hpp"
#include "Zenject/PrefabFactory_4.hpp"
#include "Zenject/PrefabFactory_5.hpp"
#include "Zenject/PrefabGameObjectProvider.hpp"
#include "Zenject/PrefabInstantiator.hpp"
#include "Zenject/PrefabInstantiatorCached.hpp"
#include "Zenject/PrefabProvider.hpp"
#include "Zenject/PrefabProviderResource.hpp"
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
#include "Zenject/PrefabResourceFactory_1.hpp"
#include "Zenject/PrefabResourceFactory_2.hpp"
#include "Zenject/PrefabResourceFactory_3.hpp"
#include "Zenject/PrefabResourceFactory_4.hpp"
#include "Zenject/PrefabResourceFactory_5.hpp"
#include "Zenject/ProfileBlock.hpp"
#include "Zenject/ProjectContext.hpp"
#include "Zenject/ProjectKernel.hpp"
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "Zenject/ProviderUtil.hpp"
#include "Zenject/ReflectionBakingCoverageModes.hpp"
#include "Zenject/ResolveProvider.hpp"
#include "Zenject/ResourceProvider.hpp"
#include "Zenject/RootResolveMethods.hpp"
#include "Zenject/RunnableContext.hpp"
#include "Zenject/SceneContext.hpp"
#include "Zenject/SceneContextRegistry.hpp"
#include "Zenject/SceneContextRegistryAdderAndRemover.hpp"
#include "Zenject/SceneDecoratorContext.hpp"
#include "Zenject/SceneKernel.hpp"
#include "Zenject/ScopableBindingFinalizer.hpp"
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/ScopeTypes.hpp"
#include "Zenject/ScriptableObjectInstaller.hpp"
#include "Zenject/ScriptableObjectInstallerBase.hpp"
#include "Zenject/ScriptableObjectInstallerUtil.hpp"
#include "Zenject/ScriptableObjectInstaller_1.hpp"
#include "Zenject/ScriptableObjectInstaller_2.hpp"
#include "Zenject/ScriptableObjectInstaller_3.hpp"
#include "Zenject/ScriptableObjectInstaller_4.hpp"
#include "Zenject/ScriptableObjectInstaller_5.hpp"
#include "Zenject/ScriptableObjectInstanceProvider.hpp"
#include "Zenject/ScriptableObjectResourceProvider.hpp"
#include "Zenject/SignalBindingBindInfo.hpp"
#include "Zenject/SignalBus.hpp"
#include "Zenject/SignalBusInstaller.hpp"
#include "Zenject/SignalCallbackWithLookupWrapper.hpp"
#include "Zenject/SignalCallbackWrapper.hpp"
#include "Zenject/SignalCopyBinder.hpp"
#include "Zenject/SignalDeclaration.hpp"
#include "Zenject/SignalDeclarationAsyncInitializer.hpp"
#include "Zenject/SignalDeclarationBindInfo.hpp"
#include "Zenject/SignalDefaultSyncModes.hpp"
#include "Zenject/SignalExtensions.hpp"
#include "Zenject/SignalMissingHandlerResponses.hpp"
#include "Zenject/SignalSubscription.hpp"
#include "Zenject/SignalSubscriptionId.hpp"
#include "Zenject/SignalTickPriorityCopyBinder.hpp"
#include "Zenject/SingleProviderBindingFinalizer.hpp"
#include "Zenject/StaticContext.hpp"
#include "Zenject/StaticMemoryPoolBaseBase_1.hpp"
#include "Zenject/StaticMemoryPoolBase_1.hpp"
#include "Zenject/StaticMemoryPool_1.hpp"
#include "Zenject/StaticMemoryPool_2.hpp"
#include "Zenject/StaticMemoryPool_3.hpp"
#include "Zenject/StaticMemoryPool_4.hpp"
#include "Zenject/StaticMemoryPool_5.hpp"
#include "Zenject/StaticMemoryPool_6.hpp"
#include "Zenject/StaticMemoryPool_7.hpp"
#include "Zenject/StaticMemoryPool_8.hpp"
#include "Zenject/SubContainerBinder.hpp"
#include "Zenject/SubContainerBindingFinalizer.hpp"
#include "Zenject/SubContainerCreatorBindInfo.hpp"
#include "Zenject/SubContainerCreatorByInstaller.hpp"
#include "Zenject/SubContainerCreatorByInstance.hpp"
#include "Zenject/SubContainerCreatorByInstanceGetter.hpp"
#include "Zenject/SubContainerCreatorByMethod.hpp"
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
#include "Zenject/SubContainerCreatorByMethod_1.hpp"
#include "Zenject/SubContainerCreatorByMethod_10.hpp"
#include "Zenject/SubContainerCreatorByMethod_2.hpp"
#include "Zenject/SubContainerCreatorByMethod_3.hpp"
#include "Zenject/SubContainerCreatorByMethod_4.hpp"
#include "Zenject/SubContainerCreatorByMethod_5.hpp"
#include "Zenject/SubContainerCreatorByMethod_6.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectInstaller.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_1.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_10.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_2.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_3.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_4.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_5.hpp"
#include "Zenject/SubContainerCreatorByNewGameObjectMethod_6.hpp"
#include "Zenject/SubContainerCreatorByNewPrefab.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabInstaller.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_1.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_10.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_2.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_3.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_4.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_5.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabMethod_6.hpp"
#include "Zenject/SubContainerCreatorByNewPrefabWithParams.hpp"
#include "Zenject/SubContainerCreatorCached.hpp"
#include "Zenject/SubContainerCreatorDynamicContext.hpp"
#include "Zenject/SubContainerCreatorUtil.hpp"
#include "Zenject/SubContainerDependencyProvider.hpp"
#include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
#include "Zenject/TaskUpdater_1.hpp"
#include "Zenject/TickableManager.hpp"
#include "Zenject/TickablesTaskUpdater.hpp"
#include "Zenject/ToChoices.hpp"
#include "Zenject/TransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/TransientProvider.hpp"
#include "Zenject/TypeAnalyzer.hpp"
#include "Zenject/TypeValuePair.hpp"
#include "Zenject/ValidationErrorResponses.hpp"
#include "Zenject/ValidationMarker.hpp"
#include "Zenject/ValidationUtil.hpp"
#include "Zenject/WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/ZenAutoInjecter.hpp"
#include "Zenject/ZenFactoryMethod.hpp"
#include "Zenject/ZenInjectMethod.hpp"
#include "Zenject/ZenMemberSetterMethod.hpp"
#include "Zenject/ZenTypeInfoGetter.hpp"
#include "Zenject/ZenjectAllowDuringValidationAttribute.hpp"
#include "Zenject/ZenjectBinding.hpp"
#include "Zenject/ZenjectException.hpp"
#include "Zenject/ZenjectManagersInstaller.hpp"
#include "Zenject/ZenjectMoqExtensions.hpp"
#include "Zenject/ZenjectSceneLoader.hpp"
#include "Zenject/ZenjectSettings.hpp"
#include "Zenject/ZenjectStateMachineBehaviourAutoInjecter.hpp"