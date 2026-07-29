// Zoro TODOs
// Organized by priority and workstream.

// ============================================================
// PRIORITY 1 — INCIDENTS AND RELIABILITY
// ============================================================

// [ ] Investigate repeated Vercel deployment failures for
//     `zoro-node-healthcheck-test`.
//
// Why this matters:
// - The latest production deployment is in an ERROR state.
// - Multiple recent production and preview deployments also failed.
// - Repeated failures may hide a broken build, missing environment variable,
//   incompatible runtime, or incorrect project configuration.
//
// Next actions:
// 1. Inspect the latest failed deployment logs in full.
// 2. Compare the failing deployment with the last known successful version.
// 3. Verify build command, output directory, framework detection, Node version,
//    and required environment variables.
// 4. Reproduce the failure locally where possible.
// 5. Apply the smallest safe fix and redeploy.
//
// Done when:
// - A production deployment reaches READY.
// - The health-check endpoint responds successfully.
// - The root cause and fix are recorded in the operations log.

// [ ] Monitor the Vercel app `charmsnap`.
//
// Current state:
// - Latest production deployment is READY.
// - Three stderr entries appeared during the build.
// - No fatal build failure was confirmed.
//
// Next actions:
// 1. Review the complete build output in the Vercel dashboard.
// 2. Confirm whether the stderr entries are warnings, deprecations, or real
//    runtime issues.
// 3. Test the main user flow against the production frontend and Heroku API.
// 4. Verify CORS behaviour for `/api/compliments`, especially OPTIONS requests.
// 5. Track slow API responses and investigate requests taking around 15 seconds.
//
// Done when:
// - No unexplained build warnings remain.
// - Production frontend-to-API requests complete reliably.
// - CORS preflight requests return the expected status.

// ============================================================
// PRIORITY 2 — ZORO QUALITY AND END-TO-END VALIDATION
// ============================================================

// [ ] Run a full end-to-end manual test of Zoro.
//
// Scope:
// - Context API startup and instruction loading.
// - GitHub read and write workflows.
// - Vercel inspection and deployment workflows.
// - Heroku app, release, dyno, and log workflows.
// - Presence/session updates and operations-log entries.
// - Safe handling of failures, stale SHAs, and permission errors.
//
// Suggested test flow:
// 1. Start from a fresh conversation.
// 2. Inspect a repository and identify an actionable task.
// 3. Create an isolated branch.
// 4. Make a small code or documentation change.
// 5. Open a draft pull request.
// 6. Verify a deployment or service health check.
// 7. Confirm that session state is closed correctly.
//
// Done when:
// - Each supported provider completes one successful end-to-end flow.
// - Failure cases are documented with expected recovery behaviour.
// - Any missing permissions or connector gaps become tracked tasks.

// [ ] Test Zoro on a real feature implementation project.
//
// Goal:
// - Validate that Zoro can move from request to implementation, verification,
//   pull request, deployment check, and completion report.
//
// Recommended feature size:
// - Small enough to complete safely in one branch and pull request.
// - Large enough to require code changes, tests, and deployment verification.
//
// Done when:
// - The feature is implemented and tested.
// - A draft or review-ready pull request is opened.
// - Deployment health is verified.
// - Lessons are added back to the Ideas Hub.

// [ ] Ask Architect for a capability and scalability review.
//
// Questions to answer:
// - Which capabilities should be added next?
// - How should skills, MCP servers, adapters, and provider integrations be
//   structured?
// - Which responsibilities belong in Zoro versus shared infrastructure?
// - How should capability discovery, permissions, and versioning work?
// - What conventions will keep the system maintainable as integrations grow?
//
// Expected output:
// - A recommended architecture.
// - A capability roadmap ordered by value and implementation cost.
// - Clear extension points for skills, MCP, adapters, and connectors.

// ============================================================
// PRIORITY 3 — NEW CAPABILITIES
// ============================================================

// [ ] Add email capabilities to Zoro.
//
// Initial scope:
// - Read selected emails and threads.
// - Summarize unread or important messages.
// - Draft replies for user approval.
// - Send notifications or daily summaries.
//
// Safety requirements:
// - Do not send email without explicit approval.
// - Preserve recipient addresses and thread context exactly.
// - Clearly distinguish drafts from sent messages.
// - Avoid exposing private email content in logs.
//
// Done when:
// - Zoro can read, summarize, and draft a reply in a controlled test inbox.
// - Approval is required before any send action.

// [ ] Extend the Heroku-inspired operating strategy to Vercel and GitHub.
//
// Goal:
// - Use the current Zoro Heroku workflow as a model for consistent operational
//   behaviour across providers.
//
// Areas to standardize:
// - Resource discovery.
// - Health and status checks.
// - Deployment and release inspection.
// - Error-log analysis.
// - Safe writes with expected-state checks.
// - Operations-log evidence.
// - Clear completion and rollback reporting.
//
// Done when:
// - Equivalent workflows exist for Heroku, Vercel, and GitHub.
// - The same safety and evidence standards apply across all three providers.

// ============================================================
// PRIORITY 4 — PERSONAL WORKFLOW AND IDEA CAPTURE
// ============================================================

// [ ] Turn the `todos` repository into Zoro's private request inbox.
//
// Purpose:
// - Capture ideas, quick tasks, investigations, and on-the-go requests.
// - Give Zoro a consistent place to organize and update personal work items.
//
// Suggested structure:
// - `inbox.md` for unprocessed requests.
// - `active.md` for current work.
// - `backlog.md` for lower-priority ideas.
// - `completed.md` for finished items and evidence links.
// - `templates/` for recurring task formats.
//
// Workflow:
// 1. New requests land in the inbox.
// 2. Zoro adds context, priority, next action, and completion criteria.
// 3. Active work links to branches, pull requests, deployments, or logs.
// 4. Finished work moves to completed with evidence.
//
// Done when:
// - The repository has a simple, repeatable task lifecycle.
// - Zoro can safely maintain it without losing original notes.

// ============================================================
// FOLLOW-UP / NEEDS CLARIFICATION
// ============================================================

// [ ] Define the "next actionable step by Claude Code" item.
//
// Missing detail:
// - Which repository, feature, or problem should Claude Code work on?
//
// Recommended next action:
// - Replace this placeholder with a specific repository, desired outcome,
//   acceptance criteria, and any constraints.
