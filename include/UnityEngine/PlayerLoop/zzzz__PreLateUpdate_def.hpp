#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager;
}
// Type: ::Physics2DLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10482))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::Physics2DLateUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate(UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate(UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::AIUpdatePostScript
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10483))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::AIUpdatePostScript
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript(UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript(UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript& operator=(UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript& operator=(UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorUpdateAnimationBegin
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10484))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::DirectorUpdateAnimationBegin
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin& operator=(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin& operator=(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::LegacyAnimationUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10485))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::LegacyAnimationUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate(UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate(UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorUpdateAnimationEnd
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10486))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::DirectorUpdateAnimationEnd
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd& operator=(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd& operator=(UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorDeferredEvaluate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10487))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::DirectorDeferredEvaluate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate(UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate(UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UIElementsUpdatePanels
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10488))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::UIElementsUpdatePanels
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels(UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels(UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateNetworkManager
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10489))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::UpdateNetworkManager
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager(UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager(UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateMasterServerInterface
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10490))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::UpdateMasterServerInterface
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface(UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface(UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UNetUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10491))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::UNetUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate(UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate(UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::EndGraphicsJobsAfterScriptUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10492))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::EndGraphicsJobsAfterScriptUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate(UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate(UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ParticleSystemBeginUpdateAll
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10493))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::ParticleSystemBeginUpdateAll
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll(UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll(UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll& operator=(UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll& operator=(UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunBehaviourLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10494))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::ScriptRunBehaviourLateUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate(UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate(UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ConstraintManagerUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10495))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate::ConstraintManagerUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate(UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate(UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate& operator=(UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PreLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10496))
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate
struct CORDL_TYPE PreLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ConstraintManagerUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate;

using ScriptRunBehaviourLateUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate;

using ParticleSystemBeginUpdateAll = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll;

using EndGraphicsJobsAfterScriptUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;

using UNetUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate;

using UpdateMasterServerInterface = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface;

using UpdateNetworkManager = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager;

using UIElementsUpdatePanels = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels;

using DirectorDeferredEvaluate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate;

using DirectorUpdateAnimationEnd = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd;

using LegacyAnimationUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate;

using DirectorUpdateAnimationBegin = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin;

using AIUpdatePostScript = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript;

using Physics2DLateUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate;


                    constexpr PreLateUpdate(PreLateUpdate const&) = default;
                    constexpr PreLateUpdate(PreLateUpdate&&) = default;
                    constexpr PreLateUpdate& operator=(PreLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PreLateUpdate& operator=(PreLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PreLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PreLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__AIUpdatePostScript, "UnityEngine.PlayerLoop", "PreLateUpdate/AIUpdatePostScript");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__ConstraintManagerUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/ConstraintManagerUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__DirectorDeferredEvaluate, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorDeferredEvaluate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationBegin, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorUpdateAnimationBegin");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__DirectorUpdateAnimationEnd, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorUpdateAnimationEnd");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/EndGraphicsJobsAfterScriptUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__LegacyAnimationUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/LegacyAnimationUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__ParticleSystemBeginUpdateAll, "UnityEngine.PlayerLoop", "PreLateUpdate/ParticleSystemBeginUpdateAll");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__Physics2DLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/Physics2DLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__ScriptRunBehaviourLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/ScriptRunBehaviourLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UIElementsUpdatePanels, "UnityEngine.PlayerLoop", "PreLateUpdate/UIElementsUpdatePanels");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UNetUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/UNetUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UpdateMasterServerInterface, "UnityEngine.PlayerLoop", "PreLateUpdate/UpdateMasterServerInterface");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__PreLateUpdate__UpdateNetworkManager, "UnityEngine.PlayerLoop", "PreLateUpdate/UpdateNetworkManager");
